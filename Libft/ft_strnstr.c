/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:19:05 by eulku             #+#    #+#             */
/*   Updated: 2024/10/26 12:19:05 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!haystack)
        return (NULL);
    if (!needle)
        return ((char *)haystack);

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] && needle[j] &&
               i + j < len && haystack[i + j] == needle[j]) // i+j demek aranan stringde sınır koyuyor
            j++;
        if (!needle[j])
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);
}
/*char *a = "Merhaba dünya";
    char *b = "dü";
    printf("%s", ft_strnstr(a, b, 11));*/