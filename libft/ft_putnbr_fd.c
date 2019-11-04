/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:23:57 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 15:27:16 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*dst;

	if (n != -2147483648)
	{
		dst = ft_itoa(n);
		ft_putstr_fd(dst, fd);
		free(dst);
	}
	else
		ft_putstr_fd("-2147483648", fd);
}
