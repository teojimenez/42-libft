/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 02:14:16 by teojimen          #+#    #+#             */
/*   Updated: 2023/10/02 02:14:16 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i;
    char newl = '\n';
    i = 0;
    if (fd < 0)
        return ;
    while(s[i])
        write(fd, &s[i++], 1);
    write(fd, &newl, 1);
}