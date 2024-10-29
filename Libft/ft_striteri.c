/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:35:25 by eulku             #+#    #+#             */
/*   Updated: 2024/10/27 20:35:25 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*void ft_iter(unsigned int i, char *str)
{
	*str = ft_tolower(*str);
}

int	main(void)
{
	char str[] = "Enes uLKu";
	ft_striteri(str,ft_iter);
	printf("%s",str);
	return (0);
}*/