/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:24:54 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/20 14:24:54 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*c_str;

	c_str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (c_str[i] == (unsigned char)c)
			return (&c_str[i]);
		i++;
	}
	return (0);
}

// The memchr() function locates the first occurrence of c (converted to an
// unsigned char) in string s.

// The memchr() function returns a pointer to the byte located, or NULL if
// no such byte exists within n bytes.