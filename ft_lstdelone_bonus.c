/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:48:00 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 11:29:29 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// supprime un noeud à l'aide de la fonction del
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
