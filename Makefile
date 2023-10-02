# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 10:31:39 by teojimen          #+#    #+#              #
#    Updated: 2023/09/18 11:24:57 by teojimen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = \
		ft_isalnum.c ft_strlen.c ft_memset.c ft_isprint.c \
		ft_isdigit.c ft_isascii.c ft_isalpha.c ft_bzero.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_memcpy.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c
OBJECTS = $(SRC:.c=.o)
CC = gcc

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all