#include "libft.h"

int ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1024);//true
	else if (c > 96 && c < 123)
		return (1024);//true
	return (0);//false
}

int main()
{
	printf("%i",ft_isalpha(80));
    printf("%i",isalpha(80));
	return (0);
}