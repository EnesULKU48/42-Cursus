/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:58:20 by eulku             #+#    #+#             */
/*   Updated: 2024/10/26 13:58:20 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *str;

    if (!s)
        return (NULL);

    str = (char *)malloc(sizeof(char) * (len + 1));

    if (!str)
        return (NULL);

    i = 0;
    j = 0;
    while (s[i])
    {
        if (i >= start && j < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';

    return (str);
}
/*char a[] = "Enesa Ülkü";
    printf("%s", ft_substr(a, 4, 5));*/