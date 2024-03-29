/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolee <rolee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 07:58:49 by rolee             #+#    #+#             */
/*   Updated: 2024/03/29 14:08:59 by rolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int nbr, int len)
{
	if (nbr == -2147483648)
	{
		len += print_str("-2147483648");
	}
	else if (nbr < 0)
	{
		len += print_char('-');
		len = print_nbr(-nbr, len);
	}
	else if (nbr > 9)
	{
		len = print_nbr(nbr / 10, len);
		len += print_char((nbr % 10) + '0');
	}
	else
	{
		len += print_char(nbr + '0');
	}
	return (len);
}

int	print_unsigned_nbr(unsigned int nbr, int len)
{
	if (nbr > 9)
	{
		len = print_unsigned_nbr(nbr / 10, len);
		len += print_char((nbr % 10) + '0');
	}
	else
	{
		len += print_char(nbr + '0');
	}
	return (len);
}
