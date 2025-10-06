/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:31:13 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 13:20:39 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//retourne une sous chaine alloué avec malloc
//comment a l'index start de s et copie len caractère
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	size_len;
	size_t	size;

	if (!s)
		return (NULL);
	size_len = ft_strlen(s);
	if (start >= size_len)
		size = 0;
	else if (len > size_len - start)
		size = size_len - start;
	else
		size = len;
	new_str = malloc(size + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
