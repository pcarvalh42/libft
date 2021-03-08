/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:47:26 by pcarvalh          #+#    #+#             */
/*   Updated: 2021/03/08 15:41:49 by pcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_atoi(const char *str);
int 	ft_isascii(int c);
char	*ft_strchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);



#endif
