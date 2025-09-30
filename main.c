#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	char *str;
	str = ft_substr("ccoucou", 2, 5);
	printf("%s\n", str);

	char *ito;

	ito = ft_itoa(12);
	printf("%s\n", ito);


    return 0;
}
