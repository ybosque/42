/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 10:51:41 by ybosque           #+#    #+#             */
/*   Updated: 2018/04/10 10:57:42 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	if (c == '\0')
		return (&str[ft_strlen(s)]);
	i = ft_strlen(s) - 1;
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return (&str[i]);
	return (0);
}
