/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:41:15 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/04/17 13:17:58 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
# include<stdio.h>
# include <string.h>
int main(void)
{
    unsigned char  c[] = "gogovimpa";
    
    memset(c, '5', 3);
    printf("this is memset = %s\n", c);
    ft_memset(c, '5', 3);
    printf("this is ft_memset = %s\n", c);
    return(0);
}*/