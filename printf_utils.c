/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:24:32 by egun              #+#    #+#             */
/*   Updated: 2022/08/01 19:01:03 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	ft_putstr(char *str, int flag)
{
	char	*mem;
	int		fd;

	fd = flag;
	if (!str)
		return (ft_putstr("(null)"));
	mem = str;
	while (*str)
		write(fd, str++, 1);
	return (str - mem);
}

int	ft_putpointer(unsigned long int point)
{
	char	str[16];
	int		i;
	int		leng;

	if (point == 0)
		return (ft_putstr("0x0", 1));
	leng = ft_putstr("0x", 1);
	ft_bzero(str, 16);
	i = 0;
	while (point)
	{
		str[i++] = "0123456789abcdef"[point % 16];
		point /= 16;
	}
	while (i--)
		leng += write(1, &str[i], 1);
	return (leng);
}

int	ft_puthex(unsigned int point, char *charset)
{
	char	str[16];
	int		i;
	int		leng;

	if (point == 0)
		return (ft_putstr("0", 1));
	ft_bzero(str, 16);
	i = 0;
	leng = 0;
	while (point)
	{
		str[i] = charset[point % 16];
		point /= 16;
		i++;
	}
	while (i--)
		leng += write(1, &str[i], 1);
	return (leng);
}

int	ft_putnbr(int nb)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(nb);
	len += ft_putstr(num, 1);
	free(num);
	return (len);
}

int	ft_putunsigned(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb > 9)
		i += ft_putunsigned(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
	i++;
	return (i);
}
