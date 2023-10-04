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

static int	ft_char_counter(char const *s, char c)
{
	int	words;
	int	len_no_search;

	words = 0;
	len_no_search = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			len_no_search++;
			if (*s == '\0' || *s == c)
				words++;
		}
	}
	return (words);
}

static void	free_split(char **s, int i)
{
	while (i-- > 0)
		free(s[i]);
	free(s);
}

static int	memory(int filas, char **matriz, char *s, char c)
{
	int	len;
	int	i;

	i = 0;
	while (i < filas)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			len++;
			if (*s == '\0' || *s == c)
				break ;
		}
		matriz[i] = (char *)ft_calloc(len + 1, sizeof(char));
		if (!matriz[i])
		{
			free_split(matriz, filas);
			return (-1);
		}
		i++;
	}
	return (0);
}

static char	**fill(int filas, char **matriz, char *copy_s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < filas)
	{
		while (*copy_s == c && *copy_s)
			copy_s++;
		while (*copy_s != c && *copy_s)
			matriz[i][j++] = *copy_s++;
		j = 0;
		i++;
	}
	return (matriz);
}

char	**ft_split(char const *s, char c)
{
	int		filas;
	char	*copy_s;
	char	**matriz;

	if (!s)
		return (0);
	filas = ft_char_counter(s, c);
	copy_s = (char *)s;
	matriz = (char **)ft_calloc(filas + 1, sizeof(char *));
	if (!matriz)
		return (0);
	if (memory(filas, matriz, (char *)s, c) == -1)
		return (0);
	matriz = fill(filas, matriz, (char *)copy_s, c);
	return (matriz);
}

//ANTIGUO CON MALLOC QUE FALLA EL  STRICT

// static int	ft_char_counter(char const *s, char c)
// {
// 	int	words;
// 	int	len_no_search;

// 	words = 0;
// 	len_no_search = 0;
// 	while (*s)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		while (*s != c && *s)
// 		{
// 			s++;
// 			len_no_search++;
// 			if (*s == '\0' || *s == c)
// 				words++;
// 		}
// 	}
// 	return (words);
// }

// static void	free_split(char **s, int i)
// {
// 	while (i-- > 0)
// 		free(s[i]);
// 	free(s);
// }

// char **ft_split(char const *s, char c)
// {
//     int filas;
//     if(!s)
//         return (0);
//     filas = ft_char_counter(s, c);
//     char **matriz = (char **)malloc((filas + 1) * sizeof(char *));
//     if (!matriz)
//         return(0);
//     matriz[filas] =  0;
//     char *copy_s = (char *)s;
//     int len = 0;
//     int i = 0;
//     int j = 0;

//     while (i < filas)
//     {
//         //caso primero
//         while (*s == c && *s)
//             s++;
//         while(*s != c && *s)
//         {
//             s++;
//             len++;
//             //nueva palabra
//             if (*s == '\0' || *s == c)
//                 break;
//         }
//         matriz[i] = (char *)malloc((len + 1) * sizeof(char));
//         matriz[i][len] = '\0';
//         if (!matriz[i])
//         {
//             free_split(matriz, filas);
//             return (0);
//         }
//         i++;
//         len = 0;
//     }
//     i = 0;
//     j = 0;
//     //while fill contenido
//     while (i < filas)
//     {
//         //caso primero
//         while (*copy_s == c && *copy_s)
//                 copy_s++;
//         //mientras s no sea ni search ni null
//         //while() -> avanzamos s y j, despues de la copia
//         while (*copy_s != c && *copy_s)
//             matriz[i][j++] = *copy_s++;
//         //reiniciamos j, para que empieze en el inicio de la memoria
//         // matriz[i][j] = '\0';
//         j = 0;
//         i++;
//     }
//     return (matriz);
// }
