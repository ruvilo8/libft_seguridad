/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 09:34:06 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/20 19:26:12 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
# include<stdio.h>
# include <string.h>
int main(void)
{
    const char  *c;

    c = "gogo";
    ft_strlen(c);
    printf("this is strlen = %zu\n", strlen(c));
    printf("this is ft_strlen = %zu\n", ft_strlen(c));
    return(0);
}*/