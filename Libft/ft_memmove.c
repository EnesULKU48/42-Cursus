/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:10:50 by eulku             #+#    #+#             */
/*   Updated: 2024/11/01 11:31:27 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while ((int)i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*char data[20] = "123456789";
	ft_memmove(data+5, data, 1);
	printf("%s\n", data);
	
    char data2[20] = "123456789";
	char *sonuc = ft_memcpy(data2+5, data2, 1);
	printf("%s", sonuc);*/