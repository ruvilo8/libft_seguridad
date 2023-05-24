/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:27:06 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/04/17 13:25:14 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int h;

    h = 'y';
    printf ("%c toupper hace esto -->%c\n", h, toupper(h));
    printf ("%c ft_toupper hace esto -->%c\n", h, ft_toupper(h));
    return(0);
}*/