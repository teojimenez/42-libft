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

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *p_needle;
    char *p_haystack;
    size_t i;

    if ((!needle && len <= 0))
        return ((char *)haystack);
    if ((!needle && !haystack && len <= 0))
        return ((char *)haystack);

    while (haystack && len > 0)
    {
        i = len;
        p_haystack = (char *)haystack;
        p_needle = (char *)needle;
        while (*p_haystack == *p_needle && i > 0)
        {
            if (i == 0 && !p_needle)
                return (0);
            i--;
            p_needle++;
            p_haystack++;
        }
        if (*p_needle == '\0')
            return ((char *)haystack);
        len--;
        haystack++;
    }
    return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Write C code here
//     printf("%s", strnstr("hola me teo", "me", 0));
//     //char *strnstr(const char *haystack, const char *needle, size_t len);
//     return 0;
// }

// The strnstr() function locates the first occurrence of the null-termi-
//      nated string needle in the string haystack, where not more than len char-
//      acters are searched.  Characters that appear after a `\0' character are
//      not searched.  Since the strnstr() function is a FreeBSD specific API, it
//      should only be used when portability is not a concern

// If needle is an empty string, haystack is returned; if needle occurs
//      nowhere in haystack, NULL is returned; otherwise a pointer to the first
//      character of the first occurrence of needle is returned.