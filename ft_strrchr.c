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

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *) &str[i]);
		i--;
	}
	return (0);
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