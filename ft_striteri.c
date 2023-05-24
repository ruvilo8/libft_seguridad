/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:13:46 by mruiz-vi          #+#    #+#             */
/*   Updated: 2023/05/22 17:13:48 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	ft_sub_strmapi(unsigned int n, char* c)
{
	*c = *c + n;
}

int	main(void)
{
	char	str [] = "abcdefghijklmn";
	char	*p;
	p = ft_strdup(str);
	ft_striteri(p, ft_sub_strmapi);
	printf("The result of ft_striteri for abcdefghijklmn is: %s\n", p);
	free(p);
	return (0);
}
*/