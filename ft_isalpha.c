/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:48:14 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/16 23:48:19 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1024);
	else if (c > 96 && c < 123)
		return (1024);
	return (0);
}

//verifica que sea alfabetico
// #include <stdio.h>
// int main(void)
// {
// 	printf("Expected:1024\nYours:%i\n", ft_isalpha(70));
// 	printf("Expected:1024\nYours:%i\n", ft_isalpha(97));
// 	printf("Expected:0\nYours:%i\n", ft_isalpha(93));
// }