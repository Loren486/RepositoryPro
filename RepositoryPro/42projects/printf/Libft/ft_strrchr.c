/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:54:12 by alorenza          #+#    #+#             */
/*   Updated: 2023/09/27 21:15:32 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s != '\0')
	{
		if (*s == (char )c)
		{
			last = (char *)s;
		}
		s++;
	}
	if (*s == (char )c && last == 0)
		last = (char *)s;
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (last);
}
