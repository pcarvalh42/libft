/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:10:08 by pcarvalh          #+#    #+#             */
/*   Updated: 2021/03/09 15:44:08 by pcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int size;
	int i;

	i = 0;
	size = ft_strlen(s);
	while (size >= 0)
	{
		if (s[size] == (char)c)
		{
			i = size;
			break ;
		}
		size--;
	}
	if (size < 0)
		return (NULL);
	else
		while (i-- != 0)
			s++;
	return ((char*)s);
}
