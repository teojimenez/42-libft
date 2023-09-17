/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:19:18 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/17 01:21:17 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0' && i < size - 1)
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest));
}

// int main(void)
// {
//     char dest[20] = "Hello, ";
//     char src[] = "world!";
//     printf("%i MIO: \n", ft_strlcat(dest, src, sizeof(dest));
//     return (0);
// }
