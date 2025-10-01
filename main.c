#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// static char mapper_up(unsigned int index, char c)
// {
// 	(void)index;
// 	return ((unsigned char)ft_toupper((unsigned char)c));
	
// }

static void testiteri(unsigned int i, char *str)
{
	(void)i;
	*str = 'A';
}
int main(void)
{
	char str[] = "coucou les loulou";
	//printf("%s\n", ft_strmapi(str, mapper_up));
	

	ft_striteri(str, testiteri);

	printf("%s\n", str);

    return 0;
}
