/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:17:11 by dufama            #+#    #+#             */
/*   Updated: 2025/10/06 11:27:06 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// permet de convertir un entier (12) en chaine ("12")
// elle imprime les caratère a l'envers donc une fonction reverse
// est nécessaire
static int	strlen_plus(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*reverse(char *s)
{
	int		fin;
	int		start;
	char	temp;

	fin = ft_strlen(s) - 1;
	start = 0;
	while (fin > start)
	{
		temp = s[start];
		s[start] = s[fin];
		s[fin] = temp;
		start++;
		fin--;
	}
	return (s);
}

static void	print_in_string(int size, char *str, long nb)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	int		digit;
	char	*str;
	long	nb;

	nb = n;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		nb = -nb;
	}
	digit = strlen_plus(nb);
	size = digit + 1 + sign;
	str = malloc(size);
	if (!str)
		return (NULL);
	print_in_string(digit, str, nb);
	if (sign)
	{
		str[digit] = '-';
		str[digit + 1] = '\0';
	}
	return (reverse(str));
}
