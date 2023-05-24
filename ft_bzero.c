/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:16:32 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/04/19 17:16:40 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
# include <stdio.h>
# include <string.h>

int	main(void)
{
	unsigned char	c[] = "gogovimpa";

	bzero(c, 3);
	printf("this is bzero = %s\n", c);
	ft_bzero(c, 3);
	printf("this is ft_bzero = %s\n", c);
	return (0);
}*/