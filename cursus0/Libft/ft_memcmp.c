/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:41:56 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 20:10:09 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && (str1[i] && str2[i]))
	{
		if (str1[i] == str2[i])
			i++;
		else if (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		else if (str1[i] < str2[i])
			return (str2[i] - str1[i]);
	}
	return (0);
}
