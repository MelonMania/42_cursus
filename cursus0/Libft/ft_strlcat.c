/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:55:54 by wolee             #+#    #+#             */
/*   Updated: 2021/11/10 13:24:48 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		d_len;
	size_t		s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (!src)
		return (0);
	if (dstsize == 0)
		return (s_len);
	if (d_len > dstsize)
		return (dstsize + s_len);
	while (*dst)
		dst++;
	while (dstsize-- - d_len > 1 && *src)
	{
		*dst++ = *src++;
	}
	*dst = 0;
	return (d_len + s_len);
}
