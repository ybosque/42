/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:29:15 by ybosque           #+#    #+#             */
/*   Updated: 2019/11/05 00:55:56 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char   *strs;
    unsigned char   *strd;
    int             i;

    i = 0;
    strs = (unsigned const char *)src;
    strd = (unsigned char *)dst;
    while (i < n)
    {
        if (strs[i] != (unsigned char)c)
            strd[i] = strs[i];
        else
        {
            strd[i] = strs[i];
            return (&strs[i + 1]);
        }
        i++;
    }
    return (0);
}