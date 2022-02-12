/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:03:21 by wolee             #+#    #+#             */
/*   Updated: 2022/02/12 11:33:47 by woojinlee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	char	*res;

	index = 0;
	res = NULL;
	while (s[index] != '\0')
	{
		if (s[index] == (unsigned char)c)
		{
			res = (char *)&s[index];
		}
		index++;
	}
	if ((unsigned char)c == 0)
	{
		res = (char *)&s[ft_strlen(s)];
	}
	return (res);
}
