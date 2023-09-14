#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while(src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        I++;
    }
    dest[i] = '\0';
    return (ft_strlen(dest));
}
//most size-1 bytes to dest, always adds a terminating null byte
// The return value of the function is the length of src

int main(void)
{
    // char src[] = "Hola !";
    // char dest[10];
    printf("%i MIO: \n", ft_strlcpy(dest, src, sizeof(dest)));
    return (0);
}