/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:15:34 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 10:17:57 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	str = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (str);
	while (haystack[i] && i + ft_strlen(needle) <= n)
	{
		j = 1;
		if (haystack[i] == needle[0])
		{
			while (needle[j] && i + j < n && haystack[i + j] == needle[j])
				j++;
			if (j == ft_strlen(needle))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
