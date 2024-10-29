/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:54:43 by eulku             #+#    #+#             */
/*   Updated: 2024/10/27 21:54:43 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*char c = 'a';
	int fd = open("output.txt", O_CREAT | O_RDWR | O_APPEND, 0666);

	ft_putchar_fd(c, fd);

	close(fd);*/