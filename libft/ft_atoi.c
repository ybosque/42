/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:35:08 by ybosque           #+#    #+#             */
/*   Updated: 2018/07/01 14:34:07 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	nb = 0;
	i = 0;
	sign = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	if (!(ft_strncmp(&str[i], "-2147483648", 11)))
		return (-2147483648);
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		if (str[0] == '+')
			return (0);
		i++;
		sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - '0';
	return (nb * sign);
}
