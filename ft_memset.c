#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *i;

	i = b;
	while (len > 0)
	{
		*i = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
