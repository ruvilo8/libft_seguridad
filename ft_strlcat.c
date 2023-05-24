/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:57:38 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/24 12:59:57 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	if (dst_len < dstsize -1 && dstsize > 0)
	{
		while (dst_len + i < dstsize - 1 && src[i] != '\0')
		{
			dst [j] = src [i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dst_len >= dstsize)
		dst_len = dstsize;
	return (src_len + dst_len);
}

/*int main(void)
#include <string.h>
#include <stdio.h>
{
	char dst [20] = "pqrstuvwxyz";
	char scr [] = "abcdefghijklmnop";
	char dst1 [20] = "pqrstuvwxyz";
	char scr1 [] = "abcdefghijklmnop";
	printf("The source string was: %s\n", scr);
	printf("The destination string was: %s\n", dst);
	printf("The result of the ft_strlcat is: %lu\n", ft_strlcat(dst, scr, sizeof(dst)));
	printf("The concatenated string with ft_strlcat is: %s\n", dst);
	printf("The source string was: %s\n", scr1);
	printf("The destination string was: %s\n", dst1);
	printf("The result of the srtcat is: %lu\n", strlcat(dst1 , scr1, sizeof(dst)));
	printf("The concatenated string with strlcat is: %s\n", dst1);
	return(0);
}*/