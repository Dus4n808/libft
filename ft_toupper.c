#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	value;

	value = (unsigned char)c;
	if (value >= 'a' && value <= 'z')
		value -= 32;
	return (value);
}
