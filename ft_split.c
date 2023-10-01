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

static int ft_char_counter(char const *s, char c)
{
    int words = 0;
    int len_no_search = 0;
    while(*s)
    {
        while (*s == c && *s)
            s++;
        while (*s != c && *s)
        {
            s++;
            len_no_search++;
            //nueva palabra
            if (*s == '\0' || *s == c)
                words++;
        }
    }
    return (words);
}

// static void free_split(char **s, int i)
// {
// 	while(i-- > 0)
// 		free(s[i]);
// 	free(s);
// }

char **ft_split(char const *s, char c)
{
    int filas;
    //int valor_filas_real;
    filas = ft_char_counter(s, c);
    //valor_filas_real = filas;
    char **matriz = (char **)ft_calloc(filas + 1 , sizeof(char *));
	if (!matriz)
		return(0);
    //asignar memoria

    //char **copy_matriz = matriz;
    char *copy_s = (char *)s;

    int len = 0;
    int i = 0;
    int j = 0;
    while (i < filas)
    {
        //caso primero
        while (*s == c && *s)
            s++;
        while(*s != c && *s)
        {
            s++;
            len++;
            //nueva palabra
            if (*s == '\0' || *s == c)
                break;
        }
        matriz[i] = (char *)ft_calloc(len + 1, sizeof(char));
		if (!matriz[i])
			return (0);
		i++;
        len = 0;
    }
    i = 0;
    j = 0;
    //while fill contenido
    while (i < filas)
    {
        //caso primero
        while (*copy_s == c && *copy_s)
                copy_s++;
        //mientras s no sea ni search ni null
        //while() -> avanzamos s y j, despues de la copia
        while (*copy_s != c && *copy_s)
            matriz[i][j++] = *copy_s++;
        //reiniciamos j, para que empieze en el inicio de la memoria
        j = 0;
        i++;
    }
	// free_split(matriz, filas);
    return (matriz);
}



//VERSION 1



// static int ft_char_counter(char const *s, char c)
// {
//     int counter = 0;
//     while(*s)
//     {
//         if (*s++ == c)
//         {
//             while(*s++ == c)
//                 s++;
//             counter++;
//         }
//     }
//     if(s[0] != c)
//             counter++;
//     return (counter);
// }

// char **ft_split(char const *s, char c)
// {
//     int filas;
//     int valor_filas_real;
//     filas = ft_char_counter(s, c);
//     valor_filas_real = filas;
//     char **matriz = (char **)ft_calloc(filas + 1, sizeof(char *));
//     //asignar memoria

//     char **copy_matriz = matriz;
//     char *copy_s = (char *)s;

//     int len = 0;
//     int i = 0;
//     while (filas > 0)
//     {
//         if (s[0] == c)
//             s++;
//         while(*s != '\0')
//         {
//             if (*s != c)
//                 len++;
//             else if (s)
//             {
//                 s++;
//                 break;
//             }
//             s++;
//         }
//         matriz[i++] = (char *)calloc(len + 1, sizeof(char));
//         len = 0;
//         filas--;
//     }


//     i = 0;
//     int j = 0;
//     //while meter contenido
//     while (filas < valor_filas_real)
//     {
//         if (copy_s[0] == c)
//                 copy_s++;
//         while (*copy_s != c && *copy_s != '\0')
//         {
//                 if (*copy_s != c)
//                     copy_matriz[filas][j] = *copy_s;
//                 copy_s++;
//                 j++;
//         }
//         if (*copy_s == c)
//           copy_s++;
//         j = 0;
//         filas++;
//     }
//     return (copy_matriz);
// }