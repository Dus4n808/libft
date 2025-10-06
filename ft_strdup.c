/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:30:13 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 12:37:03 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//duplique une chaine de caractère (s1) vers un nouveau bloc mémoire
//retourne un pointeur vers cette nouvelle chaine
//permet ensuite de manipuler cette nouvelle chaine
//doit etre libérer ensuite
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = (ft_strlen(s1) + 1);
	s2 = malloc(len);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, len);
	return (s2);
}
