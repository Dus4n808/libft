/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:31:13 by dufama            #+#    #+#             */
/*   Updated: 2025/09/30 17:31:14 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (s[i + start] != '\0' && i < len)
	{
		size++;
		i++;
	}
	i = 0;
	new_str = malloc(size + 1);
	if (!new_str)
		return (NULL);
	while (s[start + i] && i < size)
	{
		new_str[i] = s[start + i];
		i++;
	}
	return (new_str);

}
