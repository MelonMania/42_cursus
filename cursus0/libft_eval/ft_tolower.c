/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:34:20 by wolee             #+#    #+#             */
/*   Updated: 2021/11/09 20:09:43 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
