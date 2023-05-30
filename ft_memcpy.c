/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:15:33 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/30 16:31:03 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*auxf;
	const unsigned char	*auxs;

	auxf = (unsigned char *)dest;
	auxs = (unsigned char *)src;
	if (!auxf && !auxs)
		return (NULL);
	while (n-- > 0)
		*(auxf++) = *(auxs++);
	return (dest);
}
