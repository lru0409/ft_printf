/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolee <rolee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:00:51 by rolee             #+#    #+#             */
/*   Updated: 2024/03/29 14:07:05 by rolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_low_hexa(unsigned int decimal, int len)
{
	if (decimal > 15)
	{
		len = print_low_hexa(decimal / 16, len);
		len += print_char("0123456789abcdef"[decimal % 16]);
	}
	else
	{
		len += print_char("0123456789abcdef"[decimal]);
	}
	return (len);
}

int	print_up_hexa(unsigned int decimal, int len)
{
	if (decimal > 15)
	{
		len = print_up_hexa(decimal / 16, len);
		len += print_char("0123456789ABCDEF"[decimal % 16]);
	}
	else
	{
		len += print_char("0123456789ABCDEF"[decimal]);
	}
	return (len);
}

int	print_ptr(size_t address, int len)
{
	if (address > 15)
	{
		len = print_ptr(address / 16, len);
		len += print_char("0123456789abcdef"[address % 16]);
	}
	else
	{
		len += print_char("0123456789abcdef"[address]);
	}
	return (len);
}
