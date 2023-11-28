/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:58:35 by alorenza          #+#    #+#             */
/*   Updated: 2023/09/27 23:20:13 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	x;

	p = (unsigned char *)s;
	x = (unsigned char)c;
	while (n > 0)
	{
		if (*p == x)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
