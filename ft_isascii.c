#include "libft.h"

int ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);//true
	return (0);//false
}

int main()
{
	printf("%i",ft_isascii(128));
    printf("%i",isascii(128));
	return (0);
}