/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:08:10 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/03/29 14:37:36 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}
/*
# include <stdio.h>
# include <ctype.h>
int main(void)
{
   int  a;

   a = ' ';
   ft_isascii(a);
   printf("ft_isascii = %i\n", ft_isascii(a));
   printf("isascii = %i\n", isascii(a));
   return(0); 
}*/