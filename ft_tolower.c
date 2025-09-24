#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	value;

	value = (unsigned char)c;
	if (value >= 'A' && value <= 'Z')
		value += 32;
	return (value);
}
