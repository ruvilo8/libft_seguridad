/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:06:05 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/19 22:51:53 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = ((const unsigned char *)s);
	while (n != 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    const char  *s;
    int e;
    s = "Hipogrifo violento,\
		que corriste parejas con el viento,\
		¿dónde rayo sin llama,\
		pájaro sin matiz, pez sin escama\
		y bruto sin instinto\
		natural, al confuso laberinto\
		de esas desnudas peñas te desbocas,\
		te arrastras y despeñas?\
		Quédate en este monte,\
		donde tengan los brutos su Faetonte;";
    e = 'H';
    printf("strrchr tiene la letra en la posición %p\n", memchr(s, e, 15));
    printf("ft_strrchr tiene la letra en la posición %p\n", ft_memchr(s, e, 15));
	return (0);
}*/