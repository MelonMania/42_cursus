/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:37:26 by wolee             #+#    #+#             */
/*   Updated: 2021/11/11 21:23:45 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long int	ft_calc(const char *str, size_t i,
							unsigned long int result)
{
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	size_t				i;
	int					n;
	unsigned long int	result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	result = ft_calc(str, i, result);
	return (result * n);
}
