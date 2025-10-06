/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:33:25 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 11:30:08 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// modifie le contenu des noeud a l'aide de f
//sur chaque noeud d'une liste
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (!lst || !f)
		return ;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
