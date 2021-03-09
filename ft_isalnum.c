/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:37:48 by pcarvalh          #+#    #+#             */
/*   Updated: 2021/03/09 14:45:44 by pcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((char)c >= 'A' && (char)c <= 'Z')
		return (1);
	else if ((char)c >= 'a' && (char)c <= 'z')
		return (1);
	else if ((char)c >= '0' && (char)c <= '9')
		return (1);
	else
		return (0);
}
