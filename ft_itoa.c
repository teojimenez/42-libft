/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:54:06 by teojimen          #+#    #+#             */
/*   Updated: 2023/10/01 16:54:06 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static char	*extra(int nb, char *str, int len)
{
	int	digit;
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
		i++;
	}
	while (len > i)
	{
		digit = nb % 10;
		str[--len] = digit + '0';
		nb /= 10;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		len;

	len = ft_len_int(nb);
	if (nb <= -2147483648)
		return (ft_strdup("-2147483648"));
	else if (nb >= 2147483647)
		return (ft_strdup("2147483647"));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	str = extra(nb, str, len);
	return (str);
}

//paso de int a ascii
// #include <stdio.h>
// int main(void)
// {
// 	printf("Expected:-123\nYours:%s\n", ft_itoa(-123));
// 	printf("Expected:12\nYours:%s\n", ft_itoa(12));
// 	printf("Expected:0\nYours:%s\n", ft_itoa(0));
// }