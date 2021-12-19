/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:22:47 by wolee             #+#    #+#             */
/*   Updated: 2021/12/19 18:15:36 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*check;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		check = *lst;
		while (check -> next)
			check = check -> next;
		check -> next = new;
	}
	else
		*lst = new;
}
