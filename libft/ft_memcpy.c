/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 23:45:03 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/28 16:26:06 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*strs;
	unsigned char	*strd;

	strs = (unsigned char *)src;
	strd = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (strd);
}
