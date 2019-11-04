/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:09:18 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 18:24:06 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cnt_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if ((i == 0 && str[i] != c) || (str[i - 1] == c && str[i] != c))
		{
			while (str[i] && str[i] != c)
				i++;
			while (str[i] && str[i] == c)
				i++;
			count++;
		}
	}
	return (count);
}

char			**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		len;
	char	*s;
	char	**dest;

	if (!str)
		return (0);
	i = -1;
	j = 0;
	len = ft_strlen(str);
	if (!(s = ft_strdup(str)))
		return (0);
	if (!(dest = (char **)malloc(sizeof(char *) * (ft_cnt_words(s, c) + 2))))
		return (0);
	while (s[++i])
		s[i] = (s[i] == c) ? '\0' : s[i];
	i = -1;
	while (i <= len && str[i + 1] == '\0')
		i++;
	while (++i <= len)
		if ((i == 0 && s[i] != '\0') || (s[i - 1] == '\0' && (s[i] != '\0')))
			dest[j++] = ft_strdup(&s[i]);
	dest[j] = 0;
	return (dest);
}
