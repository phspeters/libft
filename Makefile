# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 16:51:34 by pehenri2          #+#    #+#              #
#    Updated: 2023/08/02 18:16:51 by pehenri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_isalpha.c    ft_isdigit.c    ft_isalnum.c     \
		ft_isascii.c    ft_isprint.c    ft_strlen.c      \
		ft_memset.c     ft_bzero.c      ft_memcpy.c      \
		ft_memmove.c    ft_strlcpy.c    ft_strlcat.c     \
		ft_toupper.c    ft_tolower.c    ft_strchr.c      \
		ft_strrchr.c    ft_strncmp.c    ft_memchr.c      \
		ft_memcmp.c     ft_strnstr.c    ft_atoi.c        \
		ft_calloc.c     ft_strdup.c     ft_substr.c      \
		ft_strjoin.c    ft_strtrim.c    ft_split.c       \
		ft_itoa.c       ft_strmapi.c    ft_striteri.c    \
		ft_putchar_fd.c ft_putstr_fd.c  ft_putendl_fd.c  \
		ft_putnbr_fd.c  ft_isspace.c    
FILES_BONUS = ft_lstnew.c
OBJ = $(FILES:.c=.o)
CC = gcc
FLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJ)
	$(CC) -c $(FLAGS) $(FILES) $(NAME:a=h)
	ar -rcs $(NAME) $(OBJ) $(NAME:a=h).gch

bonus: $(OBJ) $(OBJ_BONUS)
	$(CC) -c $(FLAGS) $(FILES) $(FILES_BONUS) $(NAME:a=h)
	ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS) $(NAME:a=h).gch

clean:
	rm -f $(OBJ) $(OBJ_BONUS)
	rm -f $(NAME:a=h).gch

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all