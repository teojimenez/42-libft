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

static char	**fill_in_str(char **matriz, char *copy_s, char c, int filas)
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

static char	**memory_in_str(char **matriz, const char *s, char c, int filas)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < filas)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			len++;
			if (*s == '\0' || *s == c)
				break;
		}

		matriz[i] = (char *)ft_calloc(len + 1, sizeof(char));
		// if (!matriz[i])
		// {
		// 	free_split(matriz, filas);
		// 	return (0);
		// }
		if (!matriz[i])
		{
			free(matriz[i]);
			return (0);
		}
		i++;
		len = 0;
	}
	if (!matriz)
		{
			free_split(matriz, filas);
			return (0);
		}
	return(matriz);
}

char	**ft_split(char const *s, char c)
{
	int	filas;

	filas = ft_char_counter(s, c);
	char **matriz = (char **)ft_calloc(filas + 1 , sizeof(char *));
	if (!matriz)
		return(0);
	char *copy_s = (char *)s;
	memory_in_str(matriz, s, c, filas);
	fill_in_str(matriz, copy_s, c, filas);
	return (matriz);
}

// while (i < filas)
//     {
//         while (*copy_s == c && *copy_s)
//                 copy_s++;
//         //mientras s no sea ni search ni null
//         //while() -> avanzamos s y j, despues de la copia
//         while (*copy_s != c && *copy_s)
//             matriz[i][j++] = *copy_s++;
//         //reiniciamos j, para que empieze en el inicio de la memoria
//         j = 0;
//         i++;
//     }