/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:40:30 by pcarvalh          #+#    #+#             */
/*   Updated: 2021/03/08 15:56:21 by pcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;
	int		i;

	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	while (n)
	{
		dest[i] = source[i];
		i++;
		n--;
	}
	return (dst);
}
