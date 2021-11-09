/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:30:36 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 20:09:31 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cp;

	if (!s1)
		return (0);
	cp = malloc(sizeof(char) * ft_strlen(s1));
	if (!cp)
		return (0);
	while (*s1 != '\0')
		*cp++ = *s1++;
	*cp = 0;
	return (cp);
}
