/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:57:46 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/17 14:55:15 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char *)str);
}
/*#include <string.h>
#include <stdio.h>
int main(void)
{
    const char  *s;
    int e;

    s = "En el corazón del bosque vivían los tres cerditos, que eran hermanos.\
     Resulta que estos cerditos siempre eran perseguidos por un lobo que se los \
     quería comer. Para escapar de este lobo, los cerditos decidieron hacerse una \
     casa. El pequeño la hizo de paja, para acabar antes y poder irse a jugar.";
    e = 'j';
    printf("strchr tiene la letra en la posición %s\n", strchr(s, e));
    printf("ft_strchr tiene la letra en la posición %s\n", ft_strchr(s, e));
}*/