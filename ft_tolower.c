#include <libft.h>

int tolower(int c)
{
    if (c >= 'A' && c <= 'B')
        return (c += 32);
    return (c);
}