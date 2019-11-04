# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
<<<<<<< HEAD
#    By: vidrya <vidrya@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/05 02:58:10 by ybosque           #+#    #+#              #
#    Updated: 2018/07/01 21:44:02 by vidrya           ###   ########.fr        #
=======
#    By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/05 02:58:10 by ybosque           #+#    #+#              #
#    Updated: 2018/06/30 19:37:33 by ybosque          ###   ########.fr        #
>>>>>>> 3a39f40b3d5dbfb1ab866a725d1f22b05e3dd32d
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
FLAGS	=	-Wall -Wextra -Werror
AR		=	ar
RC		=	rc
SRCS	=	ft_isupper.c			\
			ft_putendl.c			\
			ft_strequ.c				\
			ft_strnequ.c			\
			ft_itoa.c				\
			ft_putnbr.c				\
			ft_striter.c			\
			ft_strnew.c				\
			ft_absolute.c			\
			ft_memalloc.c			\
			ft_putstr.c				\
			ft_striteri.c			\
			ft_strnstr.c			\
			ft_atoi.c				\
			ft_memccpy.c			\
			ft_recursive_power.c	\
			ft_strjoin.c			\
			ft_strrchr.c			\
			ft_bzero.c				\
			ft_memchr.c				\
			ft_strcat.c				\
			ft_strlcat.c			\
			ft_strsplit.c			\
			ft_isalnum.c			\
			ft_memcmp.c				\
			ft_strchr.c				\
			ft_strlen.c				\
			ft_strstr.c				\
			ft_isalpha.c			\
			ft_memcpy.c				\
			ft_strclr.c				\
			ft_strmap.c				\
			ft_strsub.c				\
			ft_isascii.c			\
			ft_memdel.c				\
			ft_strcmp.c				\
			ft_strmapi.c			\
			ft_strtrim.c			\
			ft_isdigit.c			\
			ft_memmove.c			\
			ft_strcpy.c				\
			ft_strncat.c			\
			ft_tolower.c			\
			ft_islower.c			\
			ft_memset.c				\
			ft_strdel.c				\
			ft_strncpy.c			\
			ft_strncmp.c			\
			ft_toupper.c			\
			ft_isprint.c			\
			ft_putchar.c			\
			ft_strdup.c				\
			ft_putchar_fd.c 		\
			ft_putstr_fd.c			\
			ft_putnbr_fd.c			\
			ft_putendl_fd.c			\
			ft_lstadd.c				\
			ft_lstdelone.c			\
			ft_lstdel.c				\
			ft_lstnew.c				\
			ft_lstmap.c				\
			ft_lstiter.c

OBJ=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)	

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re