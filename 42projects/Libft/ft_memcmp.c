/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:26:11 by alorenza          #+#    #+#             */
/*   Updated: 2023/09/27 23:09:35 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*((char *)s1) != *((char *)s2))
		{
			return (*((unsigned char *)s1) - *((unsigned char *)s2));
		}
		s1++;
		s2++;
	}
	return (0);
}
