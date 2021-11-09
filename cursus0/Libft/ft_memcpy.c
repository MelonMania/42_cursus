/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 08:05:33 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 08:33:41 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*m_dst;
	unsigned char	*m_src;
	size_t			i;

	m_dst = dst;
	m_src = (unsigned char)src;
	i = 0;
	while (i < n)
	{
		*m_dst++ = *m_src++;
		i++;
	}
	*m_dst = 0;
	return (dst);
}
