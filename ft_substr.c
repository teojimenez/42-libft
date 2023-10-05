/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:28:50 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/27 19:28:50 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (0);
	while (i < len && s[start])
		sub[i++] = s[start++];
	return ((char *)sub);
}

// Reserva (con malloc(3)) y devuelve una substring de
// la string ’s’.
// La substring empieza desde el índice ’start’ y
// tiene una longitud máxima ’len’.
//se tiene que tener en cuenta el len real!
// #include <stdio.h>
// int main()
// {
// 	printf("\n%s\n", ft_substr("HOLA MUNDO", 5, ft_strlen("HOLA MUNDO")));
// 	printf("\n%s\n", ft_substr("Neque consectetur, adipisci velit", 6, 70)); 
// 	//consectetur, adipisci velit
// 	char *str = "Neque consectetur, adipisci velit"
// 	printf("\n%s\n", ft_substr(str, 6, ft_strlen("consectetur, adipisci")));
// 	//consectetur, adipisci
// 	return (0);
// }