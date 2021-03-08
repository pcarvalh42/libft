/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:18:42 by pcarvalh          #+#    #+#             */
/*   Updated: 2021/02/19 15:26:27 by pcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sdest;
	int		ssrc;
	size_t	i;

	sdest = ft_strlen(dest);
	if (sdest > size)
		sdest = size;
	ssrc = ft_strlen(src);
	i = 0;
	while (src[i] && (sdest + i + 1) < size)
	{
		dest[sdest + i] = src[i];
		i++;
	}
	if (sdest < size)
		dest[sdest + i] = '\0';
	return (sdest + ssrc);
}
