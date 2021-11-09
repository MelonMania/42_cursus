/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 08:34:30 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 15:42:53 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*m_dst;
	unsigned char	*m_src;
	size_t			i;

	i = 0;
	if (dst == src || n == 0)
		return (dst);
	if (dst < src)
	{
		m_dst = (unsigned char *)dst;
		m_src = (unsigned char *)src;
		while (i++ < n)
			*m_dst++ = *m_src++;
	}
	else
	{
		m_dst = (unsigned char *)dst + (n - 1);
		m_src = (unsigned char *)src + (n - 1);
		while (i++ < n)
			*m_dst-- = *m_src--; // dst > src 이기에 src 뒤의것부터 dst의 뒤에서부터 값을 넣어준다.
	}
	return (dst);
}
