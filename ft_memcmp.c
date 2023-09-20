/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:53:15 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/20 20:53:15 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t  i;
	int len_s1;
	int len_s2;
	char * c_s1;
	char * c_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (c_s1[i] != c_s2[i])
			return ((unsigned char)c_s1[i] - (unsigned char)c_s2[i]);
		i++;
	}
	return (0);
}

// DESCRIPTIONS
// 	The memcmp() function compares byte string s1 against byte string s2.
//     Both strings are assumed to be n bytes long.

// RETURN VALUES
//      The memcmp() function returns zero if the two strings are identical, oth-
//      erwise returns the difference between the first two differing bytes
//      (treated as unsigned char values, so that `\200' is greater than `\0',
//      for example).  Zero-length strings are always identical.  This behavior
//      is not required by C and portable code should only depend on the sign of
//      the returned value.