/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:49:46 by eulku             #+#    #+#             */
/*   Updated: 2024/10/25 15:49:46 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size > 0)
    {
        while (i < (size - 1) && src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    i = 0;
    while (src[i])
        i++;

    return (i);
}
/*char dest[50] = "rgearghrsthryhjsryjhsr";
    char src[50] = "enes";

    int len = ft_strlcpy(dest, src, 30);
    printf("%d   %s", len, dest);*/