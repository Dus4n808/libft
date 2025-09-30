/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:46:42 by dufama            #+#    #+#             */
/*   Updated: 2025/09/30 15:50:15 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*bloc;
	size_t	len;

	len = size * count;
	bloc = malloc(len);
	if (!bloc)
		return (NULL);
	ft_bzero(bloc, len);
	return (bloc);
}
