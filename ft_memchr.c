/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:29:45 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 11:39:03 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//cherche le premier OCTET égal du bloc S
//le cast en unsigned char permet la garanti de se
//balader octet par octet 
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*i == (unsigned char)c)
			return (i);
		i++;
		n--;
	}
	return (NULL);
}
