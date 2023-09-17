/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:48:14 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/16 23:48:19 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1024);
	else if (c > 96 && c < 123)
		return (1024);
	return (0);
}
//1024: true, =: false

// int main()
// {
// 	printf("%i",ft_isalpha(80));
//     printf("%i",isalpha(80));
// 	return (0);
// }
