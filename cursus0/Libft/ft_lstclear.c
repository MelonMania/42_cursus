/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:01:18 by wolee             #+#    #+#             */
/*   Updated: 2021/11/23 16:11:06 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*check;

	if (lst && del)
	{
		check  = *lst;
		while (*lst)
		{
			*lst = check -> next;
			del(check -> content);
			free(check);
			check = *lst;
		}
	}
}