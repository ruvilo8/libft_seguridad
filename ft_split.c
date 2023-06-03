/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:50:44 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/06/03 19:19:50 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_num_toke(const char *s, char c)
{
	unsigned int	num_toke;

	num_toke = 0;
	while (*s)
	{
		if (*s != c)
		{
			++num_toke;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (num_toke);
}

static char	**ft_liberar_espacio(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

static void	ft_toke_len(char **toke, unsigned int *toke_len, char c)
{
	unsigned int	i;

	*toke += *toke_len;
	*toke_len = 0;
	i = 0;
	while (**toke && **toke == c)
		(*toke)++;
	while ((*toke)[i])
	{
		if ((*toke)[i] == c)
			return ;
		(*toke_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*toke;
	unsigned int	toke_len;
	unsigned int	num_toke;
	unsigned int	i;

	num_toke = ft_num_toke(s, c);
	tab = (char **)malloc(sizeof(char *) * (num_toke + 1));
	if (!(tab) || !(s))
		return (NULL);
	i = 0;
	toke = (char *)s;
	toke_len = 0;
	while (i < num_toke)
	{
		ft_toke_len(&toke, &toke_len, c);
		tab[i] = (char *)malloc(sizeof(char) * (toke_len + 1));
		if (!(tab[i]))
			return (ft_liberar_espacio(tab));
		ft_strlcpy(tab[i], toke, toke_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
