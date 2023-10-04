/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:27:16 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/17 00:27:34 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}

//verifica que sea ascii
// #include <stdio.h>
// int main(void)
// {
// 	printf("Expected:1\nYours:%i\n", ft_isascii(70));
// 	printf("Expected:0\nYours:%i\n", ft_isascii(130));
// }
