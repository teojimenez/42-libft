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
    char *memory;
    int i;

    i = -1;
    memory = (char *)malloc(ft_strlen(s1) + 1);
    if (!memory)
        return (NULL);
    while(s1[++i])
        memory[i] = s1[i];
    memory[i] = '\0';
    return (memory);
}
    // The strdup() function allocates sufficient memory for a copy of the
    //  string s1, does the copy, and returns a pointer to it.  The pointer may
    //  subsequently be used as an argument to the function free(3).

//se puede usar para devolver punteros vacios;