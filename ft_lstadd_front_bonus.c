/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:58:51 by teojimen          #+#    #+#             */
/*   Updated: 2023/12/04 20:58:51 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *(lst);
	*(lst) = new;
}

//new->next = *(lst); apuntamos a la lst
//*(lst) = new; para reapuntar al que va a ser la primera posicion de la lista