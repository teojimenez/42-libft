/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:58:06 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/28 12:58:06 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (!set)
		return ((char *)s1);
	else if (!s1)
		return (0);
	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end && ft_strchr(set, s1[end]))
		end--;
	str = ft_substr(s1, start, (end - start) + 1);
	if (!str)
		return (0);
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	printf("\n%s\n", ft_strtrim("..22.2.2HOLA2.2.2.2222", "2.")); //HOLA
// 	printf("\n%s\n", ft_strtrim("22H2O..LA.....", "2.")); //H2O..LA
// 	return (0);
// }