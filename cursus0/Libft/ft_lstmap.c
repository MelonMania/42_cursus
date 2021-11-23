/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:21:09 by wolee             #+#    #+#             */
/*   Updated: 2021/11/23 16:30:15 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list) * (ft_lstsize(lst) + 1));
	if (!new)
		return (0);
	while (lst -> next)
	{
		f(lst -> content);
		new = lst;
		del(lst -> content);
		lst = lst -> next;
	}
	free(lst);
	return (new);
}