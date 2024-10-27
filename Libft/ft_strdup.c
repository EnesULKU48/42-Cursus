/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:01:40 by eulku             #+#    #+#             */
/*   Updated: 2024/10/26 13:01:40 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strdup(const char *s1)
{
    char *str;
    size_t i;

    if (!s1)
        return (NULL);

    str = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));

    if (!str)
        return (NULL);

    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';

    return (str);
}
/*char a[] = "Enes";
    printf("%s", ft_strdup(a));*/