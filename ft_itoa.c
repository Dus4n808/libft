/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:17:11 by dufama            #+#    #+#             */
/*   Updated: 2025/09/30 17:29:13 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (i < size - 1)
	{
		str[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*str;
	long	nb;

	nb = n;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		nb = -nb;
	}
	size = (strlen_plus(nb) + 1 + sign);
	str = malloc(size);
	print_in_string(size, str, nb);
	reverse(str);
	str[size - 1] = '\0';
	if (sign)
		str[0] = '-';
	return (str);
}
