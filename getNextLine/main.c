/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:09:26 by ybosque           #+#    #+#             */
/*   Updated: 2018/10/11 17:16:33 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
    int   fd;
    char        *line;


    if (!(fd = open("xd.txt", O_RDWR)))
        return (0);
    ft_putstr("aha");
    ft_putnbr(get_next_line(fd, &line));
    ft_putstr("XD");
    ft_putstr(line);
}