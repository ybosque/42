/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:42:38 by ybosque           #+#    #+#             */
/*   Updated: 2019/05/28 10:28:15 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_putstr(char *str)
{
    int i;

    i = -1;
    while (str[++i])
        ft_putchar(str[i]);
}

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *str)
{
    char    *dest;
    int     i;

    if(!(dest = malloc(sizeof(dest) * (ft_strlen(str) + 1))))
        return (0);
    i = -1;
    while (str[++i])
        dest[i] = str[i];
    dest[i] = '\0';
    return (dest);
}

int     is_separator(char c, char *charset)
{
    int     i;

    i = -1;
    while (charset[++i])
        if (charset[i] == c)
            return (1);
    return (0);
}

int     count_words(char *str, char *charset)
{
    int     n;
    int     i;

    n = 0;
    i = 0;
    while (is_separator(str[i], charset))
        i++;
    while (str[i])
    {
        while (!(is_separator(str[i], charset)))
            i++;
        if (i == 0 || !(is_separator(str[i - 1], charset)))
            n++;
        while (is_separator(str[i], charset))
            i++;
    }
    return (n);
}

void    printsplit(char **tab)
{
    int i;

    i = -1;
    while (tab[++i])
    {
        ft_putstr(tab[i]);
        ft_putchar('\n');
    }
}

char    **ft_split(char *str, char *charset)
{
    char    **dest;
    char    *letsgo;
    int     i;
    int     j;
    int     k;

    if (!(dest = malloc(sizeof(dest) * (count_words(str, charset) + 1))))
        return (0);
    letsgo = ft_strdup(str);
    i = 0;
    while (is_separator(letsgo[i], charset))
        i++;
    j = -1;
    while (++j < count_words(str, charset))
    {
        k = 0;
        while (!(is_separator(letsgo[i++], charset)))
            k++;
        dest[j] = &letsgo[i - k - 1];
        while (is_separator(letsgo[i++], charset))
        {
            letsgo[i] = '\0';
            k++;
        }
    }
    dest[j] = 0;
    return (dest);
}

int     main(int ac, char **av)
{
    if (ac != 3)
    {
        ft_putstr("Nombre de parametres incorrect.");
        return (0);
    }
    printsplit(ft_split(av[1], av[2]));
    return (0);
}