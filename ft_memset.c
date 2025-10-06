/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:30:02 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 12:30:27 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//met le bloc mémoire à la valeur len octet a la valeur c
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;

	i = b;
	while (len > 0)
	{
		*i = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
