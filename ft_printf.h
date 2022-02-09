/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:33:01 by egun              #+#    #+#             */
/*   Updated: 2022/02/08 16:40:54 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>

int		ft_printf(const char *key, ...);

int		arg_printer(char c, va_list macro);

int		ft_putstr(char *c);

int		ft_putpointer(unsigned long int point);

int		ft_puthex(unsigned int point, char *charset);

int		ft_putnbr(int nb);

int		ft_putunsigned(unsigned long nb);

#endif