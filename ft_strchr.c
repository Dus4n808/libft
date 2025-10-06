/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:30:09 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 12:34:55 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//cherche le caractère c dans la chaine s et retourne un
//pointeur sur le caractère trouvé
//si '\0' on retourne un pointeur sur ce caractère (NORME C)
char	*ft_strchr(const char *s, int c)
{
	unsigned char	value;

	value = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == value)
			return ((char *)s);
		s++;
	}
	if (value == '\0')
		return ((char *)s);
	return (NULL);
}
