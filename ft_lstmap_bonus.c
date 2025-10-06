/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:54:59 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 11:35:51 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//prend une liste et fait une copie en appliquant f
//si un noeud echoue la liste est supprimé
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*mylist;
	t_list	*temp;

	mylist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		temp = f(lst->content);
		new_node = NULL;
		if (temp)
			new_node = ft_lstnew(temp);
		if (!temp || !new_node)
		{
			if (temp && !new_node)
				del(temp);
			ft_lstclear(&mylist, del);
			return (NULL);
		}
		ft_lstadd_back(&mylist, new_node);
		lst = lst->next;
	}
	return (mylist);
}
