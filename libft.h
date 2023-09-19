/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:32 by teojimen          #+#    #+#             */
/*   Updated: 2023/09/18 11:15:18 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_isalnum(int c);
int		ft_strlen(const char *str);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
void	ft_bzero(void *str, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n); //?
void	*ft_memmove(void *dest, const void *src, size_t n); //?
void	*ft_memset(void *str, int value, size_t num);
char	*ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);

#endif
