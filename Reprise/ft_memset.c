/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:07:54 by ybosque           #+#    #+#             */
/*   Updated: 2019/11/04 16:08:47 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t len)
{
    unsigned int    i;
    char            *dst;

    i = 0;
    dst = (char *)str;
    while (i < len)
    {
        dst[i] = (unsigned char)c;
        i++;
    }
    return (dst);
}