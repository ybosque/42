/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 10:26:16 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 16:17:26 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	if (c == '\0')
		return (&((char *)s)[ft_strlen(s)]);
	while (s[++i])
		if (s[i] == c)
			return (&((char *)s)[i]);
	return (0);
}
