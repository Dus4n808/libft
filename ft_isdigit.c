/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:50:51 by dufama            #+#    #+#             */
/*   Updated: 2025/09/30 15:50:53 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", ft_isdigit('9'));
// 	printf("%d\n", isdigit('9'));
// }
