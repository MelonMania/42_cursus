/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:43:04 by wolee             #+#    #+#             */
/*   Updated: 2021/11/10 14:00:34 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find;
	char	*str;
	size_t	i;
	int		len;

	i = 0;
	str = (char *)s;
	len = ft_strlen(str);
	find = (char)c;
	if (!find)
		return (&str[len]);
	while (str[i])
	{
		if (str[i] == find)
			return (&str[i]);
		i++;
	}
	return (0);
}
