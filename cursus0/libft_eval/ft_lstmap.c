/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:21:09 by wolee             #+#    #+#             */
/*   Updated: 2021/12/19 19:50:01 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	node = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst -> content));
		if (!new)
		{
			ft_lstclear(&node, del);
			return (0);
		}
		ft_lstadd_back(&node, new);
		lst = lst -> next;
	}
	new = NULL;
	return (node);
}
