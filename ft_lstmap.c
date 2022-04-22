/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:01:16 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/21 15:46:08 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*old_lst;

	new_lst = NULL;
	old_lst = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		old_lst = ft_lstnew(f(lst->content));
		if (old_lst == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, old_lst);
		lst = lst->next;
	}
	return (new_lst);
}
