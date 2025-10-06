/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:30:47 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 13:14:11 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//trim une chaine de caractère
static int	ft_is_trim_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		size;
	int		i;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_is_trim_char(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_trim_char(s1[end - 1], set))
		end--;
	size = end - start;
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < size)
		str[i] = s1[start + i];
	str[size] = '\0';
	return (str);
}
