/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:17:05 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/04/24 17:40:45 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
# include <stdio.h>
# include <ctype.h>
int main(void)
{
   int  a;

   a = 'R';
   ft_isprint(a);
   printf("ft_isprint = %i\n", ft_isprint(a));
   printf("isprint = %i\n", isprint(a));
   return(0); 
}*/