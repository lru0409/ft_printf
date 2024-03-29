/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolee <rolee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 07:46:50 by rolee             #+#    #+#             */
/*   Updated: 2024/03/29 14:48:14 by rolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char chr)
{
	ft_putchar_fd(chr, STDOUT_FILENO);
	return (1);
}

int	print_str(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", STDOUT_FILENO);
		return (ft_strlen("(null)"));
	}
	ft_putstr_fd(str, STDOUT_FILENO);
	return (ft_strlen(str));
}
