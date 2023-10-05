/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:48:46 by teojimen          #+#    #+#             */
/*   Updated: 2023/10/01 18:48:46 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen((char *)s);
	new_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!new_str || !s || !f)
		return (0);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (new_str);
}

// A cada carácter de la string ’s’, aplica la función
// ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y la dirección del propio
// carácter, que podrá modificarse si es necesario

// char conv_may(unsigned int index, char c) 
// {
//     index = index + 0;
//     if (c >= 'a' && c <= 'z') {
//         return c - ('a' - 'A');
//     }
//     return c;
// }

// #include <stdio.h>
// int main()
// {
//     printf("%s", ft_strmapi("HoLa asdLAfsdf3e34", conv_may)); //HOLA
//		return (0);
// }