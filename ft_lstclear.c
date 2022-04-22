/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:28:27 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/20 14:35:34 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
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
		ft_lstdelone (*lst, del);
		*lst = temp;
	}
	ft_lstdelone (*lst, del);
	*lst = NULL;
}
