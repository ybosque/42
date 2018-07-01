/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:45:25 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 19:19:10 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (!(str = malloc(sizeof(char) * (j - i + 2))))
		return (0);
	k = -1;
	while (i <= j)
		str[++k] = s[i++];
	str[++k] = '\0';
	return (str);
}
