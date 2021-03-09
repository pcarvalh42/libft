/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:04:37 by pcarvalh          #+#    #+#             */
/*   Updated: 2021/03/09 15:08:10 by pcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	char b;

	b = (char)c;
	if (b >= 65 && b <= 90)
	{
		b = b + 32;
		return (b);
	}
	else
		return (c);
}
