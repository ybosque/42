/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 09:32:42 by ybosque           #+#    #+#             */
/*   Updated: 2018/10/11 17:19:06 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  line_len(char *str)
{
    size_t  i;

    i = 0;
    while (str[i] != '\n')
        i++;
    return (i);
}

int     get_next_line(const int fd, char **line)
{
    static char *stock;
    char        *str;
    size_t      rlen;
    size_t      llen;
    size_t      i;

    i = 0;
    str = NULL;
    while ((rlen = read(fd, str, BUFF_SIZE)))
    {
        if (!(str = malloc(rlen + 1)))
            return (-1);
        str[rlen] = '\0';
        ft_putstr("sndhlp");
        llen = line_len(str);
        ft_putstr("aled");
        if (!(line = malloc(llen + 1)))
        ft_strncpy(*line, (const char *)str, llen);
        while (++llen <= rlen)
            stock[i++] = str[llen];
        str[llen] = '\0';
        i = 0;
    }
    return (1);
}