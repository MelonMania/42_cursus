/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:24:56 by wolee             #+#    #+#             */
/*   Updated: 2021/11/23 14:01:22 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	find;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	find = (unsigned char)c;
	while (i < n && src[i])
	{
		if (src[i] == find)
			return ((unsigned char *)src + i);
		i++;
	}
	return (0);
}
