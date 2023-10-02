/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 01:04:51 by teojimen          #+#    #+#             */
/*   Updated: 2023/10/02 01:04:51 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
// size_t write(int fd, const void *buf, size_t count);
// fd: Es el descriptor de archivo en el cual se va a escribir. 
// Un descriptor de archivo es un número entero que identifica un archivo abierto en el sistema. 
// Los descriptores de archivo pueden ser obtenidos mediante llamadas al sistema como open(). 
// Algunos descriptores de archivo predefinidos son 0 para la entrada estándar (stdin), 
// 1 para la salida estándar (stdout), y 2 para la salida de error estándar (stderr).

// c: El carácter a enviar.
// fd: El file descriptor sobre el que escribir.

// Valor devuelto -> Nada

// Funciones autorizadas -> write
// Descripción Envía el carácter ’c’ 
// al file descriptor especificado.