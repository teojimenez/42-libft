#include "libft.h"

int ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (16384);//true
	return (0);//false
}

int main()
{
	printf("%i",ft_isprint(126));
    printf("%i",isprint(126));
	return (0);
}