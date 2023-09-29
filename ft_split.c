/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:22:11 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/29 12:22:11 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_char_counter(char const *s, char c)
{
    int counter = 0;
    while(*s)
    {
        if (*s++ == c)
            counter++;
    }
    return (counter);
}

char **ft_split(char const *s, char c)
{
    int filas;
    int valor_filas_real;
    filas = ft_char_counter(s, c);
    valor_filas_real = filas;
    char **matriz = (char **)ft_calloc(filas + 1, sizeof(char *));
    //asignar memoria

    char **copy_matriz = matriz;
    char *copy_s = (char *)s;

    int len = 0;
    int i = 0;
    while (filas > 0)
    {
        if (s[0] == c)
            s++;
        while(*s != '\0')
        {
            if (*s != c)
                len++;
            else if (s)
            {
                s++;
                break;
            }
            s++;
        }
        matriz[i++] = (char *)calloc(len + 1, sizeof(char));
        len = 0;
        filas--;
    }


    i = 0;
    int j = 0;
    //while meter contenido
    while (filas < valor_filas_real)
    {
        if (copy_s[0] == c)
                copy_s++;
        while (*copy_s != c && *copy_s != '\0')
        {
                if (*copy_s != c)
                    copy_matriz[filas][j] = *copy_s;
                copy_s++;
                j++;
        }
        if (*copy_s == c)
          copy_s++;
        j = 0;
        filas++;
    }
    return (copy_matriz);
}

// {"ola", "ey", "i", "ola"}
