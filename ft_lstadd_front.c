/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:37:42 by dufama            #+#    #+#             */
/*   Updated: 2025/10/02 12:08:22 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *myList;

	myList = *lst;


}

/*
lst --> (maillon 1)- (maillon 2) - (maillon 3) - etc...

new --> (maillon 0)

result --> (maillon 0) - (maillon 1) - etc

maillon 0 --> content = 0x324141; next = NULL

next de maillon 0 = content de maillon 1
*/
