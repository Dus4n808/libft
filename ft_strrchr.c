/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:30:38 by dufama            #+#    #+#             */
/*   Updated: 2025/10/03 19:04:05 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	value;
	int				last;

	value = (unsigned char)c;
	last = ft_strlen(s);
	while (last >= 0)
	{
		if (s[last] == value)
			return ((char *)(s + last));
		last--;
	}
	return (NULL);
}
