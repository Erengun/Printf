/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:46:42 by egun              #+#    #+#             */
/*   Updated: 2022/01/10 17:48:55 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	final = *lst;
	while (final-> next)
	{
		final = final -> next;
	}
	final -> next = new;
}
