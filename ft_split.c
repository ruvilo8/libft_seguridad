/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:50:44 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/24 12:29:04 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_toklen(const char *s, char c)
{
	size_t	num_token;

	num_token = 0;
	while (*s)
	{
		if (*s != c)
		{
			++num_token;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (num_token);
}

char	**ft_split(const char *s, char c)
{
	char	**toke;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	toke = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!toke)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			toke[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	toke[i] = NULL;
	return (toke);
}
/*
# include<stdio.h>
# include <string.h>
int main(void)
{
    char *str = "Hola mundo, esto es una prueba";
    char **tokens = ft_split(str, ' ');

    int i = 0;
    while (tokens[i] != NULL) {
        printf("Token %d: %s\n", i, tokens[i]);
        free(tokens[i]);
        i++;
    }
    free(tokens);

    return (0);
}*/