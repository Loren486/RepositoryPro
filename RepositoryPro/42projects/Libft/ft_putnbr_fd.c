/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:41:54 by alorenza          #+#    #+#             */
/*   Updated: 2023/10/12 05:02:28 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n *= -1;
	}	
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		if (n != -2147483648)
		{
			c = '0' + n;
			write(fd, &c, 1);
		}
	}
}
/*
int main()
{
	int i = 123456;
	ft_putnbr_fd(i, 2);
}*/