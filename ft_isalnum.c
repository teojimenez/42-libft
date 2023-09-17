/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:27:53 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/17 01:28:28 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c > 47 && c < 58)
		return (8);
	else if (c > 64 && c < 91)
		return (8);
	else if (c > 96 && c < 123)
		return (8);
	return (0);
}

// int main()
// {
// 	printf("%i",ft_isalnum(48));
//     printf("%i",isalnum(100));
// 	return (0);
// }
