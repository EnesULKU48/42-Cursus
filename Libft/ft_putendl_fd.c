/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:19:31 by eulku             #+#    #+#             */
/*   Updated: 2024/10/31 10:52:51 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*char *c =  "enes ulku";
	int fd = open("output.txt", O_CREAT | O_RDWR | O_APPEND, 0666);

	ft_putendl_fd(c, fd);

	close(fd);*/