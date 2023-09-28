/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:55:22 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/19 10:55:22 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char    *ft_strrchr(const char *str, int c)
// {
//     int i;
    
//     i = 0;
//     while (*str)
//     {
//       str++;
//       i++;
//     }
//     if ((char)c != '\0')
//       str--;
//     while (*str && i >= 0)
//     {
//         if (*str == (char)c)
//             return ((char *) str);
//         str--;
// 		i--;
//     }
//     if (!*(char *)str && (char)c == '\0')
//         return ((char *) str);
//     return (0);
// }

char    *ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *) &str[i]);
		i--;
	}
	return(0);
}

// #include <stdio.h>
// #include <string.h>

// int	main () 
// {
// 	const char str[] = "https://www.tutorialspoint.com";
// 	const char ch = '.';
// 	printf("MAIN:%s \n", strrchr(str, ch));
// 	printf("MINE:%s", ft_strrchr(str, ch));
// 	return(0);
// }