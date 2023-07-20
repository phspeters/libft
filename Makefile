# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 16:51:34 by pehenri2          #+#    #+#              #
#    Updated: 2023/07/19 18:30:35 by pehenri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c  \
		ft_memset.c  ft_bzero.c   ft_memcpy.c  \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c  \
		ft_strrchr.c ft_strncmp.c ft_memchr.c  \
		ft_memcmp.c  ft_strnstr.c ft_atoi.c    \
		ft_calloc.c  ft_strdup.c  ft_substr.c  \
		

OBJ = $(patsubst %.c, %.o, $(FILES))
CC = gcc
FLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJ)
	$(CC) -c $(FLAGS) $(FILES) libft.h
	ar -rcs $(NAME) $(OBJ) libft.h.gch

bonus:

clean:
	rm -f *.o
	rm -f *.gch

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all