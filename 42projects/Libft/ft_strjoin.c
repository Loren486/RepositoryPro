/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:25:44 by alorenza          #+#    #+#             */
/*   Updated: 2023/10/05 18:30:43 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		i;
	int		f;

	if (s2 == NULL && s1 == NULL)
		return (NULL);
	nstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (nstr == NULL)
		return (NULL);
	i = -1;
	f = -1;
	while (s1[++i])
		nstr[i] = s1[i];
	while (s2[++f])
		nstr[i + f] = s2[f];
	nstr[i + f] = 0;
	return (nstr);
}
