/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 23:48:15 by ybosque           #+#    #+#             */
/*   Updated: 2018/07/01 14:34:03 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int			i;
	unsigned const char		*strs;
	unsigned char			*strd;

	strs = src;
	strd = dst;
	i = 0;
	while (i < n)
	{
		strd[i] = strs[i];
		if (strs[i] == (unsigned char)c)
			return ((unsigned char*)dst + i + 1);
		i++;
	}
	return (0);
}
