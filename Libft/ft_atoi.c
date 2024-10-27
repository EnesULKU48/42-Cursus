/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:33:59 by eulku             #+#    #+#             */
/*   Updated: 2024/10/26 12:33:59 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *str)
{
    int i;
    int total;
    int sign;

    sign = 1;
    total = 0;
    i = 0;
    while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
        total = total * 10 + (str[i++] - 48);

    return (total * sign);
}
/*char str[] = "-123ab";
    int result;
    result = ft_atoi(str);
    printf("%d", result);*/