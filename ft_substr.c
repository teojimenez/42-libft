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

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char *sub;
//     size_t i;
//     size_t real_size;

//     real_size = ft_strlen((char *)s);

//     i = 0;
//     if (!s)
//         return (0);

//     if (len > real_size)
//         len = real_size;

//     sub = ft_calloc(len + 1, sizeof(char));
//     if (!sub)
//         return (0);

//      if ((size_t)start > len)
//          return (sub);
    
//     while (i < len && *s != '\0')
//         sub[i++] = s[start++];

//     return (sub);
// }


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*sub;
    size_t	i;

	i = 0;
	if (!s)
		return(0);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;

	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (0);
	while (i < len && s[start])
		sub[i++] = s[start++];
	return((char *)sub);
}

//se tiene que tener en cuenta el len real, no el que tendra la substr

// s: La string desde la que crear la substring.
// start: El índice del caracter en ’s’ desde el que empezar la substring.
// len: La longitud máxima de la substring.

//Valor devuelto:  La substring resultante. NULL si falla la reserva de memoria.

// Reserva (con malloc(3)) y devuelve una substring de
// la string ’s’.
// La substring empieza desde el índice ’start’ y
// tiene una longitud máxima ’len’.