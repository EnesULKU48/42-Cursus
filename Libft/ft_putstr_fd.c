/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:15:59 by eulku             #+#    #+#             */
/*   Updated: 2024/10/27 22:15:59 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
    int i;

    if (s == NULL)
        return;

    i = 0;
    while (s[i])
        write(fd, &s[i++], 1);

}
/*char *c =  "enes ulku"; 
    int fd = open("output.txt", O_CREAT | O_RDWR | O_APPEND, 0666); 

    ft_putstr_fd(c, fd);

    close(fd);*/