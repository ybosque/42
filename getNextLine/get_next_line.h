/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 09:49:00 by ybosque           #+#    #+#             */
/*   Updated: 2018/10/11 16:55:44 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
 #define GET_NEXT_LINE
 #define BUFF_SIZE 32
 #include <fcntl.h>
 #include "../libft/libft.h"

 int    get_next_line(const int fd, char **line);
#endif