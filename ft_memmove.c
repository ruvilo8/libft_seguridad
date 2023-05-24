/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:01:10 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/16 12:41:12 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest + n;
	s = (unsigned char *)src + n;
	if (!src && !dest)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
			*(--d) = *(--s);
		return (d);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    char    *s = "Copia esto";
    char    *d = "fatti mandare dalla mamma";
    size_t  n = 9;

    ft_memmove(d, s, n);
    printf ("ft_memmove = %s\n", d);
    memcpy(d, s, n);
    printf ("memmove = %s\n", d);
    return(0);
}*/