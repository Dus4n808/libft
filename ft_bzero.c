/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:47:00 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 10:59:58 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// cette fonction met tout les octets d'une zone mémoire
// pointé par *void à 0
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
