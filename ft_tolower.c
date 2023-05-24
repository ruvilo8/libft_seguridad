/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:45:28 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/04/17 13:24:55 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int h;

    h = 'R';
    printf ("%c tolower hace esto -->%c\n", h, tolower(h));
    printf ("%c ft_tolower hace esto -->%c\n", h, ft_tolower(h));
    return(0);
}*/