/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 01:18:10 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 11:00:56 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	*dst;

	if (n != -2147483648)
	{
		dst = ft_itoa(n);
		ft_putstr(dst);
		free(dst);
	}
	else
		ft_putstr("-2147483648");
}
