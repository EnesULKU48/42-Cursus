/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:04:12 by eulku             #+#    #+#             */
/*   Updated: 2024/12/11 02:33:48 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

static int	ft_check(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_u(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (ft_x(va_arg(arg, unsigned int), 0));
	else if (c == 'X')
		return (ft_x(va_arg(arg, unsigned int), 1));
	else if (c == 'p')
		return (ft_p(va_arg(arg, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar(c));
	return (-1);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		len;

	va_start(arg, s);
	i = 0;
	len = 0;
	if (s == NULL)
		return (-1);
	while (s[i])
	{
		if (s[i] != '%')
			len += ft_putchar(s[i]);
		else
		{
			i++;
			len += ft_check(s[i], arg);
		}
		i++;
	}
	va_end(arg);
	return (len);
}
