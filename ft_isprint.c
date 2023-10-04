/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:28:16 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/17 00:28:36 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (16384);
	return (0);
}

//verifica que sea printeable
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("Expected:%i\nYours:%i\n",isprint(70), ft_isprint(70));
// 	printf("Expected:%i\nYours:%i\n",isprint(4), ft_isprint(4));
// }
