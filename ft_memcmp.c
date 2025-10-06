/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:29:50 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 11:43:36 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compare les n octets de deux chaines 0 si c'est identique
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*i;
	unsigned char	*y;
	size_t			index;

	index = 0;
	i = (unsigned char *)s1;
	y = (unsigned char *)s2;
	while (index < n)
	{
		if (i[index] != y[index])
			return (i[index] - y[index]);
		index++;
	}
	return (0);
}
