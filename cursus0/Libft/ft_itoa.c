/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:58:17 by wolee             #+#    #+#             */
/*   Updated: 2021/11/16 21:13:17 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_get_string(int n, int len, char *str)
{
	int	value;

	str[len--] = 0;
	if (n == 0)
		str[len] = 0 + 48;
	else if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[len] = 8 + 48;
			n = -214748364;
			len--;
		}
		n = -n;
	}
	while (n != 0)
	{
		value = n % 10;
		n /= 10;
		str[len] = value + 48 ;
		len--;
	}
	return (str);
}

static int	ft_get_len(int n, int *minus)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			*minus = 1;
			return (10);
		}
		else
		{
			*minus = 1;
			n = -n;
		}
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		minus;
	int		len;

	minus = 0;
	len = ft_get_len(n, &minus);
	str = (char *)malloc(sizeof(char) * (len + minus + 1));
	if (!str)
		return (0);
	ft_get_string(n, len + minus, str);
	return (str);
}
