#include "libft.h"

void    ft_bzero(void *str, size_t n)
{
    size_t i;
    
    i = 0;
    char *c = (char *)str;
    while (i < n)
        c[i++] = '\0';
    //ft_memset(str, 0, n);
}