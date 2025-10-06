/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:50:45 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 11:25:24 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// check si c'est un caractère ascii
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
