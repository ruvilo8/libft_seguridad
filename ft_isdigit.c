/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:53:39 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/17 14:53:47 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
# include <stdio.h>
# include <ctype.h>
int main(void)
{
   int  a;

   a = '5';
   ft_isdigit(a);
   printf("ft_isdigit = %i\n", ft_isdigit(a));
   printf("isdigit = %i\n", isdigit(a));
   return(0); 
}*/