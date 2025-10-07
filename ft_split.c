/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:30:05 by dufama            #+#    #+#             */
/*   Updated: 2025/10/07 11:19:58 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *str, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			in_word = 0;
		}
		else
		{
			if (in_word == 0)
			{
				count++;
				in_word = 1;
			}
		}
		i++;
	}
	return (count);
}

static size_t	next_word(char const *s, char c, size_t start, size_t *len_fin)
{
	size_t	len;

	while (s[start] != '\0' && s[start] == c)
		start++;
	len = 0;
	while (s[start + len] != '\0' && s[start + len] != c)
		len++;
	*len_fin = len;
	return (start);
}

static char	*dup_word(char const *s, size_t start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = malloc(len + 1);
	i = 0;
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

char	**clear_tab(char **tab, size_t i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	nb;
	size_t	w;
	size_t	len;
	char	**res;

	if (!s)
		return (NULL);
	nb = count_word(s, c);
	res = malloc((nb + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	w = 0;
	i = 0;
	while (w < nb)
	{
		i = next_word(s, c, i, &len);
		res[w] = dup_word(s, i, len);
		if (res[w] == NULL)
			return (clear_tab(res, w));
		i += len;
		w++;
	}
	res[w] = NULL;
	return (res);
}
