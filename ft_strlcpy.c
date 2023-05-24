/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:31:08 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/24 12:26:47 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    char    *s = "Copia esto";
    char    *d = "fatti mandare dalla mamma";
    size_t  n = 26;
    ft_strlcpy(d, s, n);
    printf ("ft_strlcpy = %s\n", d);
    printf ("tamaño src del ft_strlcpy = %zu", ft_strlcpy(d, s, n));
    memcpy(d, s, n);
    printf ("strlcpy = %s\n", d);
    printf ("tamaño src del strlcpy = %zu", strlcpy(d, s, n));
    return(0);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	
	char s1[25];
	printf("The strlcpy result is: %lu",strlcpy(s1, "Caracola", 4));
	printf("\n%s\n", s1);
	char s2[25];
	printf("The ft_strlcpy result is: %lu",ft_strlcpy(s2, "Caracola", 4));
	printf("\n%s\n", s2);
	return(0);
}*/