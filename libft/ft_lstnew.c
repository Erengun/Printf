/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:11:01 by egun              #+#    #+#             */
/*   Updated: 2022/01/09 15:25:35 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*src;

	src = (t_list *) malloc(sizeof(t_list));
	if (!src)
		return (NULL);
	src -> content = content;
	src -> next = NULL;
	return (src);
}
