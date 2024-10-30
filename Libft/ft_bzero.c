/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:16:03 by eulku             #+#    #+#             */
/*   Updated: 2024/10/30 12:14:35 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*char	str[] = "Enes ULKU";
	int	a = ft_strlen(str);

	ft_bzero (str, 3);	
	int	i ;
	i = 0;
	while (i != a)
	{
		write(1, &str[i], 1);
		i++;
	}
	
	int arr[5] = {1, 2, 3, 4, 5};

	ft_bzero(arr, 9);

	for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); 
    }
*/