#include "libft.h"
#include <stddef.h>

void    ft_bzero(void *str, size_t n)
{
    // char *c = (char *)str;
    // while (*c != '\0')
    //     *c++ = '\0';
    ft_memset(str, 0, n);
}