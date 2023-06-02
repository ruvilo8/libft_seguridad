/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:01:10 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/06/02 11:06:48 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		d = dest + n;
		s = src + n;
		while (n-- > 0)
			*--d = *--s;
	}
	else
	{
		d = dest;
		s = src;
		while (n-- > 0)
			*d++ = *s++;
	}
	return (dest);
}
