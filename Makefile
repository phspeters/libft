# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 16:51:34 by pehenri2          #+#    #+#              #
#    Updated: 2023/08/07 14:51:06 by pehenri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
		ft_strlen.c		ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c	\
		ft_strlcpy.c	ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c		\
		ft_strrchr.c	ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c	\
		ft_atoi.c		ft_calloc.c		ft_strdup.c		ft_substr.c		ft_strjoin.c	\
		ft_strtrim.c	ft_split.c		ft_itoa.c		ft_strmapi.c	ft_striteri.c	\
		ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	ft_isspace.c    
FILES_BONUS =	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	\
				ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c	\
				ft_lstclear.c	ft_lstiter.c		ft_lstmap.c
OBJ = $(FILES:.c=.o)
OBJ_BONUS = $(FILES_BONUS:.c=.o)
CC = gcc
FLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJ)

bonus: $(OBJ_BONUS)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@
	ar rcs $(NAME) $@

norm:
	norminette -R CheckForbiddenSourceHeader $(FILES) $(FILES_BONUS) libft.h

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all norm
