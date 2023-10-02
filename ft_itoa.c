/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:54:06 by teojimen          #+#    #+#             */
/*   Updated: 2023/10/01 16:54:06 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_len_int(int nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while(nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nb)
{
    if (nb <= -2147483648)
        return (ft_strdup("-2147483648"));
    else if (nb >= 2147483647)
        return (ft_strdup("2147483647"));

    int len;
    char *str;
    len = ft_len_int(nb);
    int digit;
    int i = 0;
    
    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (0);
    
    if (nb < 0)
    {
        nb = -nb;
        str[0] = '-';
        i++;
    }
    while (len > i)
    {
        digit = nb % 10;
        str[--len] = digit + '0';
        nb /= 10;
    }
    return (str);
}