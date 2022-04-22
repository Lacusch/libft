/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:28:27 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/22 10:07:49 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	delete_node(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del (lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == NULL)
	{
		return ;
	}
	while ((*lst)->next != NULL)
	{
		temp = (*lst)->next;
		delete_node (*lst, del);
		*lst = temp;
	}
	delete_node (*lst, del);
	*lst = NULL;
}
