/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 01:15:30 by ybosque           #+#    #+#             */
/*   Updated: 2018/07/01 14:44:05 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(const char *s)
{
	int	i;

	if (!(s))
		return ;
	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
	ft_putchar('\n');
}
