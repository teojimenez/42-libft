/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:34:02 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/18 19:34:02 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	int size;

	size = ft_strlen(str);
	i = 0;
	while (i <= size)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	// if (*(char *)str && (char)c == '\0')
	// 	return ((char *) str);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main () 
// {
//    const char str[] = "https://www.tutorialspoint.com";
//    const char ch = '@';
//    printf("MAIN:%s \n", strchr(str, ch));
//    printf("MINE:%s", ft_strchr(str, ch));
//    return(0);
// }