/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:40:33 by etlaw             #+#    #+#             */
/*   Updated: 2022/11/25 18:24:25 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

typedef struct s_format
{
	const char	*format;
	va_list		ap;
	size_t		i;
	size_t		len;
}			t_format;

int		ft_printf(const char *format, ...);

int		ft_putchar(int c);
int		ft_putstr(const char *s);
int		ft_printnbr(int n);

int		ft_convert(va_list args, const char format);

int		ft_print_hex(unsigned int num, const char format);

int		ft_print_unsigned(unsigned int n);

int		ft_print_ptr(unsigned long long ptr);

#endif