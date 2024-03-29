/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolee <rolee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:43:45 by rolee             #+#    #+#             */
/*   Updated: 2024/03/29 14:42:44 by rolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int	print_char(char chr);
int	print_str(char *str);
int	print_nbr(int nbr, int len);
int	print_unsigned_nbr(unsigned int nbr, int len);
int	print_low_hexa(unsigned int decimal, int len);
int	print_up_hexa(unsigned int decimal, int len);
int	print_ptr(size_t address, int len);
int	ft_printf(const char *format, ...);

#endif