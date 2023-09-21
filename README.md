# 42-libft
## Makefile
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
//al hacer make se creará el .a, que es "como el compilador de la libreria"
//(primero se compila con las flags y los archivos
//(ar rc: (crea el .a con el nombre y todos ,os ft_*.c))
all: $(NAME)

clean:
	rm -rf $(OBJECTS)
//elimina todos los .o
fclean: clean
	rm -rf $(NAME)
//elimina todos los .o y libft.a
re: fclean all
//lo borra todo

```

## ft_memmove()

```c
// Copiamos una parte de la cadena en sí misma (superposición).
char str[] = "Copia de memoria";
ft_memmove(str + 7, str, 10); // resultado: Copia Co memoria
```
> Es similiar a memcpy, pero comprueba si hay superposición:
> Casos:
> 1. No hay superposición: En este caso, la dirección de memoria de la fuente y el destino no se superponen. memmove copia los datos de manera eficiente de la fuente al destino, similar a memcpy.

> 2. Superposición con la fuente antes del destino: Si la dirección de memoria de la fuente es menor que la del destino, no hay peligro de corrupción de datos. En este caso, memmove copia los datos de la fuente al destino en orden ascendente, desde la primera ubicación de memoria hacia la última, evitando así cualquier conflicto entre los datos de origen y destino.

> 3. Superposición con el destino antes de la fuente: Si la dirección de memoria de la fuente es mayor que la del destino, existe el riesgo de corrupción de datos si copias de manera directa. En este caso, memmove detectará la superposición y realizará una copia temporal de los datos en una ubicación segura antes de copiarlos en el destino.


## ft_strlcat()
```c
size_t    ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t    i;
    size_t    y;
	size_t    srcLen;
    size_t    destLen;

	srcLen = (size_t)ft_strlen(src);
	destLen = (size_t)ft_strlen(dest);
	i = destLen;
	y = 0;
	//mientras i sea menor que dstsize(tamaño real maximo de DEST)
	//que dstsize no sea 0(no hay espacio para copiar)
	while (src[y] != '\0' && i < dstsize - 1 && dstsize > 0)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	//si no hay ya un \0, se introduce
	if (dest[i] != '\0')
		dest[i] = '\0';
	//si dstsize(tamaño real maximo de DEST) es menor que destLen
	//lo igualamos porque queremos devolver el tamañ entero y no una parte
	if (dstsize < destLen)
		destLen = dstsize;
	return (destLen + srcLen);
}
```