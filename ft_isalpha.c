/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:48:54 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/03/29 14:38:17 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
# include <stdio.h>
# include <ctype.h>
int main(void)
{
   int  a;

   a = 'g';
   ft_isalpha(a);
   printf("ft_isalpha = %i\n", ft_isalpha(a));
   printf("isalpha = %i\n", isalpha(a));
   return(0); 
}*/