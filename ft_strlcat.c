/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:30:20 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 12:43:26 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//concat des chaines et retourne la taille total
//si la valeur retour < dstsize tout a été copié
//si c'est supérieur il y a eu troncature
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;

	i = 0;
	j = 0;
	len_src = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[len_src] != '\0')
		len_src++;
	while (src[j] != '\0' && (i + j + 1) < dstsize)
	{
		dst[j + i] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[j + i] = '\0';
	return (i + len_src);
}
