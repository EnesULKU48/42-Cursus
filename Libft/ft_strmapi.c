/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:31:44 by eulku             #+#    #+#             */
/*   Updated: 2024/10/31 10:50:03 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!(s || f))
		return (NULL);
	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char ft_iter(unsigned int i, char c) {
	if (i % 2 == 0) // Eğer indeks çiftse
		return ('0'); // Çift indeksler için '0' döndür
	else
		return (c); // Tek indeksler için orijinal karakteri döndür
}
int	main(void)
{
	char *str = "EneS emRE";
	str = ft_strmapi(str,ft_iter);
	printf("%s",str);

	return (0);
}*/