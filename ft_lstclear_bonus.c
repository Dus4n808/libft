/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:32:28 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 11:28:59 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//supprime les noeuds a partir de la head ** à l'aide
// de la fonction delone qui free aussi le noeud
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	current = *lst;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
	*lst = NULL;
}
