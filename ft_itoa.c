/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:39:31 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/22 18:30:46 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_putnum(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_putnum(n / 10, str, i);
		ft_putnum(n % 10, str, i);
	}
	else
		str[(*i)++] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	num;

	num = n;
	if ((str = malloc(sizeof(char) * (ft_numlen(num) + 1))) == NULL)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		str[i] = '-';
		num *= -1;
		i++;
	}
	ft_putnum(num, str, &i);
	str[i] = '\0';
	return (str);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("The resul of ft_itoa for 0 is: %s\n", ft_itoa(0));
    printf("The result of ft_itoa for 123456 is: %s\n", ft_itoa(123456));
    printf("The result of ft_itoa for -123456 is: %s\n", ft_itoa(-123456));
    printf("The result of ft_itoa for -2147483648 is: %s\n",
	 ft_itoa(-2147483648));
}*/