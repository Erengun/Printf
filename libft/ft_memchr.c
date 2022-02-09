/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:01:42 by egun              #+#    #+#             */
/*   Updated: 2022/01/05 12:45:12 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	if (c == 0 && *str)
		return (str);
	return (NULL);
}
