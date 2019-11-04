/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 01:32:53 by ybosque           #+#    #+#             */
/*   Updated: 2019/11/04 15:03:14 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		intlen(int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int		i;
	int		p;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = (n < 0) ? 1 : 0;
	p = intlen(ft_absolute(n)) - 1;
	if (!(str = malloc(sizeof(char) * (p + i + 2))))
		return (0);
	if (i == 1)
		str[0] = '-';
	while (p >= 0)
	{
		if (p == 9)
			str[i++] = ft_absolute(n) / ft_recursive_power(10, p) + '0';
		else
			str[i++] = (ft_absolute(n) % (ft_recursive_power(10, p + 1)) /
					ft_recursive_power(10, p) + '0');
		p--;
	}
	str[i] = '\0';
	return (str);
}