# 42-libft
> Makefile
```c
NAME       = libft.a
//nombre que obtendra la lib
FLAGS      = -Wall -Wextra -Werror
SRC = *.c
OBJECTS = $(SRC:.c=.o)
CC = gcc

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJECTS)
//al hacer make se creará el .a
//(primero se compila con las flags y los archivos
//(ar rc: (crea el .a con el nombre y todos ,os ft_*.c))
all: $(NAME)

clean:
	rm -rf $(OBJECTS)
//elimina todos los .c
fclean: clean
	rm -rf $(NAME)
//elimina todos los .c y libft.a
re: fclean all
//lo borra todo
```c
