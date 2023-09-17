/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:49:20 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/17 02:34:44 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	temp[n];
	char	*c_src;
	char	*c_dest;

	i = 0;
	c_src = (char *)src;
	c_dest = (char *)dest;
	if (c_src < c_dest && c_src > c_dest + n)
	{
		while (i < n)
		{
			c_src[i] = temp[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (c_dest);
}

// int main() 
// {
//   char src[] = "Hola memoria"; //13 bytes
//   char dest[10];
//   printf("MIO:%s \n", ft_memmove(dest, src, 15));
//   char src2[] = "Hola memoria"; //13 bytes
//   char dest2[10];
//   printf("REAL:%s \n", memmove(dest2, src2, 15));//dest, src, n
//   return 0;
// }
