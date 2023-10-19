/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:51:42 by alorenza          #+#    #+#             */
/*   Updated: 2023/10/19 12:21:58 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*back;
	t_list	*temp;
	t_list	*data;

	if (lst == NULL || f == NULL)
		return (NULL);
	back = NULL;
	while (lst)
	{
		data = (*f)(lst->content);
		temp = ft_lstnew(data);
		if (temp == NULL)
		{
			free(data);
			ft_lstclear(&back, del);
			return (NULL);
		}
		ft_lstadd_back(&back, temp);
		lst = lst->next;
	}
	return (back);
}
