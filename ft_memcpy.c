/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:29:40 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/17 00:32:14 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*c_src;
	char	*c_dest;

	i = 0;
	c_src = (char *)src;
	c_dest = (char *)dest;
	while (i < n)
		c_dest[i++] = c_src[i];
	c_dest[i] = '\0';
}

// int main() {
//   char src[] = "Hola, mundo!";
//   char dest[20];

//   ft_memcpy(dest, src , 4);
//   return 0;
// }
