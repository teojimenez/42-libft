/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:33:36 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/20 21:33:36 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*extra(const char *haystack, const char *needle, size_t len)
{
	char	*p_needle;
	char	*p_haystack;
	size_t	i;

	while (haystack && len > 0)
	{
		i = len;
		p_haystack = (char *)haystack;
		p_needle = (char *)needle;
		while (*p_haystack == *p_needle && i > 0 && *p_haystack != '\0')
		{
			if (i == 0 && !p_needle)
				return (0);
			i--;
			p_needle++;
			p_haystack++;
			if (i != 0 && *p_haystack == '\0' && *p_needle)
				return (0);
		}
		if (*p_needle == '\0')
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*result;

	if (*(char *)haystack == '\0' && *(char *)needle == '\0')
		return ((char *)haystack);
	else if (*(char *)haystack == '\0')
		return (0);
	else if (*(char *)needle == '\0')
		return ((char *)haystack);
	result = extra(haystack, needle, len);
	return (result);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
// 	char *str = "hola mu, hola mundo HOLA";
//     printf("MINE:%s\n", ft_strnstr(str, "mundo", 40));//mundo HOLA
//     printf("MINE:%s\n", ft_strnstr("defabcdef", "abc", 5)); //NULL
//     return 0;
// }