/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:58:06 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/28 12:58:06 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search(char const *s1, char const *set, int decision)
{
	int counter;
	if (decision == 1)
	{
		counter = 0;
		while(s1 && ft_strchr(set, s1[counter]))
			counter++;
	}
	else if (decision == 2)
	{
		counter = ft_strlen(s1);
		while(counter && ft_strchr(set, s1[counter]))
			counter--;
	}
	return (counter);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (!set)
		return ((char *)s1);
	else if (!s1)
		return (0);
	start = search(s1, set, 1);
	end = search(s1, set, 2);
	str = ft_substr(s1, start ,(end - start) + 1);
	if (!str)
		return (0);
	return (str);
}




// char *ft_strtrim(char const *s1, char const *set)
// {
// 	char	*str;
// 	int		start;
// 	int		end;

// 	if (!set)
// 		return ((char *)s1);
// 	else if (!s1)
// 		return (0);
// 	start = 0;
// 	end = ft_strlen((char *)s1);
// 	//s1[start] no es NULL, 
// 	//ft_strchr es true; (si encuentra set[0], set[1]....) en s1[start]
// 	//sumamos valores a start para que avance.(letras encontradas)
// 	//ft_strchr(str, c) busca c en str
// 	//cuando ft_strchr es false -> no encuentra c en str
// 	while(s1[start] && ft_strchr(set, s1[start]))
// 		start++;
// 	//end exista
// 	//ft_strchr es true; (si encuentra set[0], set[1]....) en s1[end]
// 	//restamos valores a end para que avance.(letras encontradas)
// 	// ft_strchr(str, c) busca c en str
// 	//cuando ft_strchr es false -> no encuentra c en str
// 	while(end && ft_strchr(set, s1[end]))
// 		end--;
// 	//creamos y hacemos malloc dentro de ft_substr
// 	//en la string s1, empezamos donde se ha quedado start(letras no encontradas y no eliminadas)
// 	//el len sera el end - start; (end es donde ya no se encuentra set en s1) + 1 (\0)
// 	str = ft_substr(s1, start ,(end - start) + 1);
// 	if (!str)
// 		return (0);
// 	return (str);

// }

// s1: La string que debe ser recortada.
// set: Los caracteres a eliminar de la string.

// Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’. La
// string resultante se devuelve con una reserva de
// malloc(3)