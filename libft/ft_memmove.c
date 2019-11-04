/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 08:30:36 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/28 16:50:15 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*strs;
	unsigned char	*strd;

	strs = (unsigned char *)src;
	strd = (unsigned char *)dst;
	i = 0;
	if (dst < src)
		while (i < len)
		{
			strd[i] = strs[i];
			i++;
		}
	else
		while (len > 0)
		{
			strd[len - 1] = strs[len - 1];
			len--;
		}
	return (strd);
}
