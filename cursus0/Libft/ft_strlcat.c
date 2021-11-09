/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:55:54 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 16:28:30 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			d_len;
	size_t			s_len;
	unsigned char	*m_dst;

	m_dst = dst;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (!src)
		return (0);
	if (dstsize == 0)
		return (s_len);
	if (d_len >= dstsize)
		return (dstsize + s_len);
	while (*m_dst)
		m_dst++;
	while (dstsize-- - d_len > 1)
	{
		*m_dst++ = *src++;
	}
	*m_dst = 0;
	return (d_len + s_len);
}
