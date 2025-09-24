#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*i == (unsigned char)c)
			return (i);
		i++;
		n--;
	}
	return (NULL);
}
