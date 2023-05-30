/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:32:59 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/30 16:33:46 by mruiz-vi         ###   ########.fr       */
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
