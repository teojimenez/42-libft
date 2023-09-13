#include "libft.h"

int ft_strlen(const char* str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main()
{
	char var1[] = "Hola";
    printf("%i", ft_strlen(var1));
    printf("%li", strlen(var1));
	return (0);
}