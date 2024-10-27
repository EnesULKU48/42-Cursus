/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:10:50 by eulku             #+#    #+#             */
/*   Updated: 2024/10/25 15:10:50 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    if (!dest || !src || n == 0)
        return (0);

    if (dest < src)
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    else
    {
        i = n;
        while (i--)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        }
    }

    return (dest);
}

/*char data[] = "123456789";
    ft_memmove(data + 3, data, 6); // "123123456" olmasını bekleriz
    printf("%s", data);*/