/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:19:18 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/18 11:14:58 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	src_len;
	size_t	dest_len;

	src_len = (size_t)ft_strlen(src);
	dest_len = (size_t)ft_strlen(dest);
	i = dest_len;
	y = 0;
	while (src[y] != '\0' && i < dstsize - 1 && dstsize > 0)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	if (dstsize < dest_len)
		dest_len = dstsize;
	return (dest_len + src_len);
}

// #include <stdio.h>
// int main(void)
// {
//     char dest[20] = "Hello, ";
//     char src[] = "world!";
//     printf("%i MIO: \n", ft_strlcat(dest, src, sizeof(dest));
//     return (0);
// }
