/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:37:25 by wolee             #+#    #+#             */
/*   Updated: 2022/02/12 11:23:38 by woojinlee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_nbr(int n, int fd)
{
	char	c;

	c = 48 + (n % 10);
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, "8", 1);
		return ;
	}
	else if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_print_nbr(n, fd);
	}
	else if (n < 10)
	{
		ft_print_nbr(n, fd);
		return ;
	}
}
