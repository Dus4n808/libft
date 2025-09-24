#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char value;
	int	last;

	value = (unsigned char)c;
	last = 0;
	while (s[last])
		last++;
	while (last >= 0)
	{
		if (s[last] == value)
			return ((char *)(s + last));
		last--;
	}
	if (value == '\0')
		return ((char *)s);
	return (NULL);
}
