#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*i;
	unsigned char	*y;
	size_t	index;

	index = 0;
	i = (unsigned char *)s1;
	y = (unsigned char *)s2;
	while (index < n)
	{
		if (i[index] != y[index])
			return (i[index] - y[index]);
		index++;
	}
	return (0);
}
