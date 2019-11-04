/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 00:12:26 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 13:35:26 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*cpy;

	i = -1;
	if (!s || !(*f))
		return (0);
	if (!(cpy = ft_strdup(s)))
		return (0);
	while (cpy[++i])
		cpy[i] = (*f)(s[i]);
	return (cpy);
}
