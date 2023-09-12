#include <string.h>
#include <stdio.h>

void *ft_memset(void *str, int value, size_t num)
{
    int i;
    char *p = str;//convertir de puntero constante a no constante

    i = 0;
    while (i < num)
    {
        p[i] = value;
        i++;
    }
    return str;
}

int main()
{
	char var1[] = "prueba, prueba12345";
    memset(var1, '*', 4);
    puts (var1);
    return (0);
}