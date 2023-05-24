/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:20:56 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/04/23 11:51:08 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*st = "Canta bajo la lluvia";
	char	*st_fts = ft_strdup(st);
	char	*st_s = strdup(st);

	printf("esto es lo que se ha copiado en s con ft_strdup %s\n", st_fts);
	printf("esto es lo que se ha copiado en s con strdup %s\n", st_s);
	free(st_fts);
	free(st_s);
	return (0);
}*/