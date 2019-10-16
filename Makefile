# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 15:22:37 by wkorande          #+#    #+#              #
#    Updated: 2019/10/16 16:28:19 by wkorande         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	./ft_isalpha.c\
		./ft_strlcat.c\
		./ft_bzero.c\
		./ft_strdup.c\
		./ft_toupper.c\
		./ft_strstr.c\
		./ft_strnstr.c\
		./ft_memcpy.c\
		./ft_memchr.c\
		./ft_memcmp.c\
		./ft_memmove.c\
		./ft_atoi.c\
		./ft_strcmp.c\
		./ft_strchr.c\
		./ft_strrchr.c\
		./ft_memset.c\
		./ft_tolower.c\
		./ft_isprint.c\
		./ft_strncat.c\
		./ft_isascii.c\
		./ft_strcat.c\
		./ft_strncpy.c\
		./ft_memccpy.c\
		./ft_isdigit.c\
		./ft_strncmp.c\
		./ft_strlen.c\
		./ft_isalnum.c\
		./ft_strcpy.c

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
