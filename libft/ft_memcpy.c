/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:58:16 by egun              #+#    #+#             */
/*   Updated: 2022/01/04 16:42:52 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*src2;
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	str = (char *)dst;
	src2 = (char *)src;
	while (i < n)
	{
		str[i] = src2[i];
		i++;
	}
	return (dst);
}
