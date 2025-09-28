#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	char str[] = "----lol----'--";
	char set[] = "'-";

	char *test = ft_strtrim(str, set);
	printf("%s\n", test);
    return 0;
}
