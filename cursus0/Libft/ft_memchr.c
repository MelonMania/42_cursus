/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:24:56 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 20:10:49 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	find;
	size_t			i;

	find = c;
	i = 0;
	src = (unsigned char *)s;
	if (n == 0)
		return (0);
	while (i < n && src[i])
	{
		if (src[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
