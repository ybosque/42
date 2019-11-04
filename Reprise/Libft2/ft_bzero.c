/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:18:28 by ybosque           #+#    #+#             */
/*   Updated: 2019/11/04 16:31:15 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *str, size_t n)
{
    unsigned int    i;
    unsigned char   *dst;

    if (n == 0)
        return ;
    i = 0;
    dst = (unsigned char *)str;
    while (i < n)
    {
        dst[i] = 0;
        i++;
    }
}