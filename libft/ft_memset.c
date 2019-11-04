/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 03:12:57 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/28 16:24:45 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int n, size_t len)
{
	unsigned int	i;
	char			*c;

	c = (char *)str;
	i = 0;
	while (i < len)
	{
		c[i] = (unsigned char)n;
		i++;
	}
	return (c);
}
