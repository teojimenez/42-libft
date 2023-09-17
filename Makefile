# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 10:31:39 by teojimen          #+#    #+#              #
#    Updated: 2023/09/13 11:21:52 by teojimen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = \
		ft_isalnum.c ft_strlen.c ft_memset.c ft_isprint.c \
		ft_isdigit.c ft_isascii.c ft_isalpha.c ft_bzero.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat ft_toupper.c \
		ft_tolower.c 
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
