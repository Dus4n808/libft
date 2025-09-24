#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	char str[] = "coucou";

	char *str2 = ft_strdup(str);
	printf("%s\n", str2);
    return 0;
}
