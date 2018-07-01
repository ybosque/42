/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 00:21:56 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 13:32:39 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*cpy;

	i = -1;
	if (!s || !(*f))
		return (0);
	if (!(cpy = ft_strdup(s)))
		return (0);
	while (cpy[++i])
		cpy[i] = (*f)(i, s[i]);
	return (cpy);
}
