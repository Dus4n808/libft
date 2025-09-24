#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	value;

	value = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == value)
			return ((char *)s);
		s++;
	}
	if (value == '\0')
		return ((char *)s);
	return (NULL);
}
