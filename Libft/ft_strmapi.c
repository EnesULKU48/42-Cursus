/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:31:44 by eulku             #+#    #+#             */
/*   Updated: 2024/10/27 19:31:44 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
	char    *str;

	if (!(s || f))
		return (NULL);
	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1)*sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*char ft_iter(unsigned int i, char c) {
    if (i % 2 == 0) // Eğer indeks çiftse
        return '0'; // Çift indeksler için '0' döndür
    else
        return c; // Tek indeksler için orijinal karakteri döndür
}

int main()
{
    char *str = "EneS emRE";
	str = ft_iter(str,ft_iter);
 	printf("%s",str);
    
    return 0;
}*/