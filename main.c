#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// static char testmappi(unsigned int index, char c)
// {
// 	(void)index;
// 	return ((unsigned char)ft_toupper((unsigned char)c));

// }

// static void testiteri(unsigned int i, char *str)
// {
// 	(void)i;
// 	*str = 'A';
// }
int main(void)
{

	t_list *mylist;
	char *str = "coucou";


	mylist = ft_lstnew(str);
	printf("%s\n", (char *)mylist->content);

    return 0;
}
