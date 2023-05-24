/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:04:44 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/03/29 14:35:11 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
# include <stdio.h>
# include <ctype.h>
int main(void)
{
   int  a;

   a = '5';
   ft_isalnum(a);
   printf("ft_isalnum = %i\n", ft_isalnum(a));
   printf("isalnum = %i\n", isalnum(a));
   return(0); 
}*/