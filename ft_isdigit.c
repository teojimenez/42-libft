#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (2048);//true
	return (0);//false
}

int main()
{
	printf("%i",ft_isdigit(22));
    printf("%i",isdigit(22));
	return (0);
}