/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 09:23:00 by ybosque           #+#    #+#             */
/*   Updated: 2018/10/11 17:19:34 by ybosque          ###   ########.fr       */
=======
/*   By: ybosque <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 09:23:00 by ybosque           #+#    #+#             */
/*   Updated: 2018/04/10 09:32:56 by ybosque          ###   ########.fr       */
>>>>>>> 3a39f40b3d5dbfb1ab866a725d1f22b05e3dd32d
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
<<<<<<< HEAD
=======
	int		i;
>>>>>>> 3a39f40b3d5dbfb1ab866a725d1f22b05e3dd32d
	char	*dst;

	if (!(dst = malloc(ft_strlen(s1) + 1)))
		return (0);
	ft_strcpy(dst, s1);
	return (dst);
}
