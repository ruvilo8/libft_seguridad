/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:34:14 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/24 12:28:06 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen (str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
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
    e = 'F';
    printf("strrchr tiene la letra en la posición %s\n", strrchr(s, e));
    printf("ft_strrchr tiene la letra en la posición %s\n", ft_strrchr(s, e));
}*/