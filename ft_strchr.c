/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:30:09 by dufama            #+#    #+#             */
/*   Updated: 2025/09/30 17:30:10 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
