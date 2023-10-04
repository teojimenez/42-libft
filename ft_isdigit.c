/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:25:09 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/17 00:25:29 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (2048);
	return (0);
}

//verifica que sea digito
// #include <stdio.h>
// int main(void)
// {
// 	printf("Expected:2048\nYours:%i\n", ft_isdigit(55));
// 	printf("Expected:0\nYours:%i\n", ft_isdigit(93));
// }
