/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:06:39 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/22 00:09:28 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	ptr = malloc (total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*ptr;
	int	*ft_ptr;

	ptr = (int*) calloc(10, sizeof(int));

	ft_ptr = (int*) ft_calloc(10, sizeof(int));

	printf("la dirección de memoria de ptr = %p", ptr);
	printf(" y el contenido de ptr = %i\n", *ptr);
	printf("la dirección de memoria de ft_ptr = %p", ft_ptr);
	printf(" y el contenido de ft_ptr = %i\n", *ft_ptr);
	return (0);
}*/