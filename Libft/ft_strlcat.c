/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:03:46 by eulku             #+#    #+#             */
/*   Updated: 2024/10/28 20:57:11 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	s;
	size_t	d;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	s = 0;
	d = dest_len;
	if (size <= d)
		return (size + src_len);
	while (src[s] && d < size - 1)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}

/*char dst[50] = "Enes   ";
	char src[50] = "ülkü okulda";
	printf("%zu - %s", ft_strlcat(dst, src, 15), dst);*/