/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:48:23 by eulku             #+#    #+#             */
/*   Updated: 2024/10/31 10:55:30 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[j] == (char)c)
			return ((char *)(s + j));
		j++;
		i--;
	}
	return (NULL);
}
/*char a[] = "Enes";
	printf("%s", ft_strchr(a, 'e'));*/