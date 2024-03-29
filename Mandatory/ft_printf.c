/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolee <rolee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:04:00 by rolee             #+#    #+#             */
/*   Updated: 2024/03/29 15:07:57 by rolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	transform(char fs, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		idx;
	int		len;

	va_start(ap, format);
	idx = 0;
	len = 0;
	while (format[idx])
	{
		if (format[idx] == '%')
			len += transform(format[++idx], ap);
		else
			len += print_char(format[idx]);
		idx++;
	}
	va_end(ap);
	return (len);
}

static int	transform(char fs, va_list ap)
{
	int			len;

	len = 0;
	if (fs == 'c')
		len = print_char(va_arg(ap, int));
	else if (fs == 's')
		len = print_str(va_arg(ap, char *));
	else if (fs == 'p')
	{
		ft_putstr_fd("0x", STDOUT_FILENO);
		len = print_ptr((size_t)va_arg(ap, void *), 2);
	}
	else if (fs == 'd' || fs == 'i')
		len = print_nbr(va_arg(ap, int), 0);
	else if (fs == 'u')
		len = print_unsigned_nbr(va_arg(ap, unsigned int), 0);
	else if (fs == 'x')
		len = print_low_hexa(va_arg(ap, int), 0);
	else if (fs == 'X')
		len = print_up_hexa(va_arg(ap, int), 0);
	else if (fs == '%')
		len = print_char('%');
	return (len);
}
