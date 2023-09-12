#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
	if (c > 47 && c < 58)
		return (8);//true
	else if (c > 64 && c < 91)
		return (8);//true
    else if (c > 96 && c < 123)
		return (8);//true
	return (0);//false
}

int main()
{
	printf("%i",ft_isalnum(48));
    printf("%i",isalnum(100));
	return (0);
}