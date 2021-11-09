/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 06:43:24 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 20:09:50 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*n_dest;
	unsigned char	src;
	size_t			i;

	n_dest = dest;
	src = c;
	i = 0;
	while (i++ < n)
	{
		*n_dest = src;
		*n_dest++;
	}
	return (dest);
}
