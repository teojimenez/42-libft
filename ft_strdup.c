/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:01:02 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/23 21:01:02 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*memory;
	int		i;

	i = -1;
	memory = (char *)malloc(ft_strlen(s1) + 1);
	if (!memory)
		return (NULL);
	while (s1[++i])
		memory[i] = s1[i];
	memory[i] = '\0';
	return (memory);
}

// #include <stdio.h>
// int main () 
// {
//    printf("\n%s\n", ft_strdup(""));
//    printf("%s", ft_strdup("Hola mundo!"));
//    return(0);
// }