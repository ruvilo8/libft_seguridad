/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:32:59 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/06/07 13:14:47 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	need_len;
	char	*hayst;

	hayst = (char *) haystack;
	need_len = ft_strlen(needle);
	if (need_len == 0 || haystack == needle)
		return (hayst);
	i = 0;
	while (hayst[i] != '\0' && i < len)
	{
		j = 0;
		while ((hayst[i + j]) != '\0' && needle[j] != '\0' && \
		hayst[i + j] == needle[j] && (i + j) < len)
			j++;
		if (j == need_len)
			return (hayst + i);
		i++;
	}
	return (0);
}
