/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:44:02 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 20:09:34 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*m_dst;
	size_t			len;

	m_dst = dst;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (dstsize-- > 1 || *src != '\0')
	{
		*m_dst++ = *src++;
	}
	*m_dst = 0;
	return (len);
}
