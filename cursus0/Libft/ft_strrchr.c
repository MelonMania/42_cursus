/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:03:21 by wolee             #+#    #+#             */
/*   Updated: 2021/11/10 14:03:22 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;
	char	find;

	len = ft_strlen(s);
	i = 0;
	find = (char)c;
	if (!ft_strchr(s, c))
		return (0);
	if (!find)
		return ((char *)&s[len]);
	len -= 1;
	while (s[len])
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	return (0);
}
