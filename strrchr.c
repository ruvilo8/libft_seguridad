/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:44:18 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/19 13:04:44 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen (str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return ('\0');
}

#include <string.h>
#include <stdio.h>
int main(void)
{
    const char  *matrix[] = {"beeeeeee", "aaaaaaa", NULL};

    printf("ft_strrchr tiene la letra en la posición %s\n", ft_strrchr(matrix[1], 'b'));
	printf("strrchr tiene la letra en la posición %s\n", strrchr(matrix[1], 'b'));
	return (0);
}