/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:28:45 by egun              #+#    #+#             */
/*   Updated: 2022/01/12 19:24:14 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*iter;
	t_list	*newlist;

	if (!lst)
		return (NULL);
	newlist = 0;
	while (lst)
	{
		iter = ft_lstnew(f(lst -> content));
		if (!iter)
		{
			ft_lstclear (&newlist, del);
			return (NULL);
		}
		ft_lstadd_back (&newlist, iter);
		lst = lst -> next;
	}
	return (newlist);
}
