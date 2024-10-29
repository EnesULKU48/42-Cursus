/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:52:09 by eulku             #+#    #+#             */
/*   Updated: 2024/10/29 11:30:16 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	digit;

	if (num == 0)
		return (1);
	digit = 0;
	while (num < 0 || num > 0)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		numlen;
	char	*str;
	long	num;

	num = n;
	numlen = ft_numlen(num);
	if (num < 0)
	{
		num *= -1;
		numlen++;
	}
	str = (char *)malloc((numlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[numlen] = '\0';
	while (num > 0)
	{
		str[--numlen] = num % 10 + 48;
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	return (str);
}
/*int num = 123;
	char *str = ft_itoa(num);
	printf("%s\n", str);*/