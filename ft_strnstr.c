/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:32:59 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/04/17 13:26:50 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_subs(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (len-- && *haystack)
	{
		if (*haystack == *needle)
		{
			if (check_subs(haystack, needle, len + 1))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}

static int	check_subs(const char *haystack, const char *needle, size_t len)
{
	while (len-- && *needle)
	{
		if (*needle++ != *haystack++)
			return (0);
	}
	if (*needle)
		return (0);
	return (1);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    char    *s1 = "Hola mi amor";
    char    *s2 = "Hola";
    char    *result = ft_strnstr(s1, s2, 4);
    if (result != NULL)
        printf("La subcadena fue encontrada por ft_strnstr.\n");
    else
        printf("La subcadena no fue encontrada por ft_strnstr.\n");
    return(0);
}*/