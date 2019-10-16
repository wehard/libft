# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 15:22:37 by wkorande          #+#    #+#              #
#    Updated: 2019/10/16 20:54:02 by wkorande         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	./libc_functions/ft_isalpha.c\
		./libc_functions/ft_strlcat.c\
		./libc_functions/ft_bzero.c\
		./libc_functions/ft_strdup.c\
		./libc_functions/ft_toupper.c\
		./libc_functions/ft_strstr.c\
		./libc_functions/ft_strnstr.c\
		./libc_functions/ft_memcpy.c\
		./libc_functions/ft_memchr.c\
		./libc_functions/ft_memcmp.c\
		./libc_functions/ft_memmove.c\
		./libc_functions/ft_atoi.c\
		./libc_functions/ft_strcmp.c\
		./libc_functions/ft_strchr.c\
		./libc_functions/ft_strrchr.c\
		./libc_functions/ft_memset.c\
		./libc_functions/ft_tolower.c\
		./libc_functions/ft_isprint.c\
		./libc_functions/ft_strncat.c\
		./libc_functions/ft_isascii.c\
		./libc_functions/ft_strcat.c\
		./libc_functions/ft_strncpy.c\
		./libc_functions/ft_memccpy.c\
		./libc_functions/ft_isdigit.c\
		./libc_functions/ft_strncmp.c\
		./libc_functions/ft_strlen.c\
		./libc_functions/ft_isalnum.c\
		./libc_functions/ft_strcpy.c

OUT = *.o

INCL = ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(INCL) -c $(SRCS)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
