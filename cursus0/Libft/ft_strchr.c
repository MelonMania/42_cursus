/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:43:04 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 20:09:28 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*m_s;
	char	find;

	m_s = (char *)s;
	find = (char)c;
	while (*m_s++)
	{
		if (*m_s == find)
			return (*m_s);
	}
	return (0);
}
