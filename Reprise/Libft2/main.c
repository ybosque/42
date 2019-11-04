/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:41:09 by ybosque           #+#    #+#             */
/*   Updated: 2019/11/04 19:53:32 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 5)
    {
        printf("%s %p", ft_memccpy(av[1], av[2], av[3], av[4]), memccpy(av[1], av[2], atoi[av[3]], atoi[av[4]]));
    }
    return;
}