/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:30:07 by wolee             #+#    #+#             */
/*   Updated: 2021/11/10 14:51:19 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_index;
	size_t	i;

	if (!s)
		return (0);
	s_index = (size_t)start;
	i = 0;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (0);
	while (s_index < ft_strlen(s) && i < len)
	{
		substr[i] = s[s_index];
		i++;
		s_index++;
	}
	substr[i] = 0;
	return (substr);
}
