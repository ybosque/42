/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 04:39:35 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/14 23:43:27 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*c;

	if (n == 0)
		return ;
	c = (unsigned char *)s;
	i = -1;
	while (++i < n)
		c[i] = 0;
}
