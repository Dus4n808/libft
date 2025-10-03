/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:54:59 by dufama            #+#    #+#             */
/*   Updated: 2025/10/03 16:04:04 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newNode;
	t_list	*mylist;

	newNode = NULL;
	mylist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		newNode = ft_lstnew(f(newNode->content));
		if (!newNode)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_front(&mylist, newNode);
	}
	return (mylist);
}
