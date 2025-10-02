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

	ft_putchar_fd('c', 1);
	ft_putstr_fd("coucou\n", 1);
	ft_putendl_fd("lol\n", 1);
	ft_putnbr_fd(10, 1);

	t_list *mylist;
	char *str = "coucou";

	mylist = ft_lstnew(str);
	printf("%s\n", mylist->content);

    return 0;
}
