/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:32:45 by ybosque           #+#    #+#             */
/*   Updated: 2019/11/05 00:55:54 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned int    i;
    unsigned char   *strs;
    unsigned char   *strd;

    i = 0;
    strs = (unsigned const char*)src;
    strd = (unsigned char*)dst;
    while (i < n)
    {
        strd[i] = strs[i];
        i++;
    }
    return (strd);
}