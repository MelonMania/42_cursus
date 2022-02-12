/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:44:02 by wolee             #+#    #+#             */
/*   Updated: 2021/11/10 13:28:36 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (!src)
		return (0);
	if (dstsize == 0)
		return (len);
	while (dstsize-- > 1 && *src)
		*dst++ = *src++;
	*dst = 0;
	return (len);
}
