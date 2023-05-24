/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 23:43:36 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/24 13:01:56 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*dst;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	dst = ft_calloc(sizeof(char), (len + 1));
	if ((dst) == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(dst + i) = (*f)(i, *(s + i));
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char	ft_sub_strmapi(unsigned int n, char c)
{
	c = c + n;
	return (c);
}
int	main(void)
{
	char	str [] = "abcdefghijklmn";
	printf("The result of ft_strmapi with ft_sub_strmapi for\
	 abcdefghijklmn is: %s\n", ft_strmapi(str, ft_sub_strmapi));
	return (0);
}*/
/*
char	zr2(unsigned int n, char c)
{
	c = c - n;
	return (c);
}

int	main(void)
{
	char	str [] = "abcdefghijklmn";
	printf("The result of ft_strmapi with zr2 for abcdefghijklmn is: %s\n",
	 ft_strmapi(str, zr2));
	return (0);
}
*/