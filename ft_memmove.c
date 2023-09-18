/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:49:20 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/18 11:19:45 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*c_src;
	char	*c_dest;

	i = n;
	c_src = (char *)src;
	c_dest = (char *)dest;
	if (c_dest == c_src)
		return (c_dest);
	else if (c_dest > c_src)
	{
		while (i-- > 0)
			c_dest[i] = c_src[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (c_dest);
}

//segundo caso superposicion, por lo que se copia de forma inversa para evitarla
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
