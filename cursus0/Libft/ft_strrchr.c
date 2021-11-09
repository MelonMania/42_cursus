/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:03:21 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 20:09:41 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	len = ft_strlne(s);
	i = 0;
	if (!ft_strchr(s, c))
		return (0);
	while (i < len)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
