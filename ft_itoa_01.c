/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:38:13 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/21 22:43:14 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	char	m;

	i = 0;
	num_malloc(n);
	while ((n > 0 || n < 0) && n)
		my_count(n);
	m = (char) i;
	num[m + 1] = '\0';
	while ((n > 0 || n < 0) && *num)
	{
		num[m] = n % 10 + '0';
		m--;
	}
	if (n < 0 && *num)
		num[0] = '-';
	if (n == 0 && *num)
		num[0] = '0';
		num[1] = '\0';
	return (*num);
}

int	my_count(int n)
{
	int	i;
	int	j;

	j = n;
	i = 0;
	while ((n > 0 || n < 0) && n)
	{
		j = j / 10;
		i++;
	}
	return (i);
}

void	*num_malloc(int n)
{
	void	*ptr;
	size_t	total_size;
	size_t	cifras;
	size_t	tam;
	int		i;

	tam = 1;
	i = 0;
	while ((n > 0 || n < 0) && n)
		my_count(n);
	cifras = (size_t) i;
	if (n == 0)
		total_size = 1 * 1 + 1;
	if (n < 0)
		total_size = (cifras * tam) + 2;
	else
		total_size = (cifras * tam) + 1;
	ptr = malloc (total_size);
	if (!ptr)
		return (NULL);
	return (ptr);
}
