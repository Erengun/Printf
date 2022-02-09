/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:23:08 by egun              #+#    #+#             */
/*   Updated: 2022/01/10 18:02:26 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hayint;
	size_t	needint;

	hayint = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[hayint] != 0 && hayint < len)
	{
		needint = 0;
		while (haystack[hayint + needint] == needle[needint]
			&& needle[needint] != 0 && needint + hayint < len)
			needint++;
		if (needint == ft_strlen(needle))
			return ((char *)&haystack[hayint]);
		hayint++;
	}
	return (NULL);
}
