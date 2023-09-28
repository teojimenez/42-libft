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

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int start;
    int end;


    if (!set)
        return ((char *)s1)
    else if (!s1)
        return (0)
    start = 0;
    end = ft_strlen((char *)s1);
    while(s1[start] && ft_strchr(set, s1[start]))
        start++;
    while(s1[end] && ft_strrchr(set, s1[end]))
        end--;
    str = ft_substr(s1, start ,(end - start) + 1);
    if (!str)
        return (0);
    return (str);
}

// s1: La string que debe ser recortada.
// set: Los caracteres a eliminar de la string.

// Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’. La
// string resultante se devuelve con una reserva de
// malloc(3)