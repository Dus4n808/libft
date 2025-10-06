/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:00:05 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 13:06:23 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//crée une nouvelle chaine de caractère et applique f a chaque
//caractère
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t				size;
	char				*res;
	unsigned int		i;

	if (!s)
		return (NULL);
	if (!f)
		return (NULL);
	size = ft_strlen(s);
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
