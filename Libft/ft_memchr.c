/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:31:58 by eulku             #+#    #+#             */
/*   Updated: 2024/10/25 23:31:58 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *str;

    i = 0;
    str = (char *)s;
    while (str[i] && i < n)
    {
        if (str[i] == (char)c)
            return ((void *)(str + i));
        i++;
    }

    return (NULL);
}
/*char s[] = "Enes Ülkü 42 de";
    printf("%s", ft_memchr(s, '4', 20));*/