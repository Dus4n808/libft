/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:29:58 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 12:27:06 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copie une zone mémoire avec détéction du chevauchement et copie
//de gauche a droite ou de doite a gauche
//d < s on check si dst est avant src (copie normal)
//sinon copie en arrière
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if ((!dst && !src) || dst == src || len == 0)
		return (dst);
	if (d < s)
	{
		while (len-- > 0)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else
	{
		while (len > 0)
		{
			d[len -1] = s[len -1];
			len--;
		}
	}
	return (dst);
}
