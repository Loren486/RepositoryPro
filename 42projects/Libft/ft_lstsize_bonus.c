/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:40:28 by alorenza          #+#    #+#             */
/*   Updated: 2023/10/19 19:18:13 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*new;

	if (lst == NULL)
		return (0);
	i = 1;
	new = lst;
	while (new->next)
	{
		i++;
		new = new->next;
	}
	return (i);
}
