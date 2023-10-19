/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:05:12 by alorenza          #+#    #+#             */
/*   Updated: 2023/10/11 21:37:58 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		i;

	i = 2;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	i;
	int		len;
	char	*str;

	i = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_count(n);
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		n = n * (-1);
	str[--len] = '\0';
	while ((--len) >= 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (i < 0)
		*str = '-';
	return (str);
}
