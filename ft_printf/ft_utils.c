/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:47:32 by eulku             #+#    #+#             */
/*   Updated: 2024/12/11 01:55:25 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb >= 0 && nb <= 9)
		len += ft_putchar(nb + '0');
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr(nb * (-1));
	}
	else
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	return (len);
}

int	ft_u(unsigned int u)
{
	int	len;

	len = 0;
	if (u <= 9)
		len += ft_putchar(u + '0');
	else
	{
		len += ft_u(u / 10);
		len += ft_u(u % 10);
	}
	return (len);
}

static int	ft_xp(unsigned long x)
{
	char	*taban;
	int		len;

	len = 0;
	taban = "0123456789abcdef";
	if (x >= 16)
		len += ft_xp(x / 16);
	len += ft_putchar(taban[x % 16]);
	return (len);
}

int	ft_p(void *p)
{
	int				len;
	unsigned long	f;

	len = 0;
	f = (unsigned long)p;
	len = 0;
	if (!f)
		return (ft_putstr("(nil)"));
	len += ft_putchar('0');
	len += ft_putchar('x');
	len += ft_xp(f);
	return (len);
}

int	ft_x(unsigned int x, int sec)
{
	char	*taban;
	int		len;

	len = 0;
	taban = "0123456789abcdef";
	if (sec == 1)
		taban = "0123456789ABCDEF";
	if (x >= 16)
		len += ft_x(x / 16, sec);
	len += ft_putchar(taban[x % 16]);
	return (len);
}
