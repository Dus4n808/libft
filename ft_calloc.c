/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:46:42 by dufama            #+#    #+#             */
/*   Updated: 2025/10/07 10:32:14 by dufama           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Cette fonction alloue un bloc mémoire et initialise les valeurs à 0
// malloc garde les valeurs
// des check de sécurité garantissent le bon fonctionnement
void	*ft_calloc(size_t count, size_t size)
{
	void	*bloc;
	size_t	len;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(0));
	len = size * count;
	bloc = malloc(len);
	if (!bloc)
		return (NULL);
	ft_bzero(bloc, len);
	return (bloc);
}
