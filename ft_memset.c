/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:16:54 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/17 01:18:33 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, size_t num)
{
	size_t	i;
	char	*p;

	p = str;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (str);
}

//sustituye n char en value
// #include <stdio.h>
// int main()
// {
// 	char var1[] = "prueba, prueba12345";
//     ft_memset(var1, '*', 4);
//     puts (var1);
//     return (0);
// }
