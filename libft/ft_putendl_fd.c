/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:24:53 by ybosque           #+#    #+#             */
/*   Updated: 2018/07/01 14:43:51 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *str, int fd)
{
	int	i;

	if (!str)
		return ;
	i = -1;
	while (str[++i])
		ft_putchar_fd(str[i], fd);
	ft_putchar_fd('\n', fd);
}
