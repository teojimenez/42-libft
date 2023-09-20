/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:33:36 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/20 21:33:36 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    
}

// The strnstr() function locates the first occurrence of the null-termi-
//      nated string needle in the string haystack, where not more than len char-
//      acters are searched.  Characters that appear after a `\0' character are
//      not searched.  Since the strnstr() function is a FreeBSD specific API, it
//      should only be used when portability is not a concern

// If needle is an empty string, haystack is returned; if needle occurs
//      nowhere in haystack, NULL is returned; otherwise a pointer to the first
//      character of the first occurrence of needle is returned.