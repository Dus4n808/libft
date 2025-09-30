#include "libft.h"
#include <stdio.h>


static int	strlen_plus(int n)
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
	int	fin;
	int	start;
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

char	*ft_itoa(int n)
{
	int	size;
	int	sign;
	char	*str;
	int	i;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	size = (strlen_plus(n) + 1 + sign);
	str = malloc(strlen_plus(n) + 1 + sign);
	i = -1;
	while (++i < size - 1)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	reverse(str);
	str[i] = '\0';
	if (sign)
		str[0] = '-';
	return (str);
}
