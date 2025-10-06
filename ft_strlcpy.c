/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:30:23 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 12:48:27 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copie de src dans dst de taille maximal dstsize
//si dstsize > strlen(src + 1) tout copier
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (j + 1 < dstsize && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	if (dstsize > 0)
		dst[j] = '\0';
	return (i);
}
