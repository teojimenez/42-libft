/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 02:32:39 by teojimen          #+#    #+#             */
/*   Updated: 2023/10/02 02:32:39 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_putchar(int nb, int fd)
{
    write(fd, &nb, 1);
}

void ft_putnbr_fd(int nb, int fd)
{
    if (fd < 0)
        return ;
    if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar(nb + '0', fd);
}