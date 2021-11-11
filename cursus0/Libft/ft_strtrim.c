/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:26:58 by wolee             #+#    #+#             */
/*   Updated: 2021/11/11 17:44:50 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*str;

	if (s1 && set)
	{
		front = 0;
		back = ft_strlen(s1) - 1;
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[back] && ft_strchr(set, s1[back]) && front < back)
			back--;
		str = (char *)malloc(sizeof(char) * ((back - front + 1) + 1));
		if (!str)
			return (0);
		ft_strlcpy(str, (char *)s1 + front, back - front + 2);
		return (str);
	}
	return (0);
}
