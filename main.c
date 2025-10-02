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

	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *current;

	char *str = "coucou";
	char *str1 = "hello";
	char *str2 = "kikou";


	node1 = ft_lstnew(str);
	node2 = ft_lstnew(str1);
	node3 = ft_lstnew(str2);

	ft_lstadd_front(&node1, node3);
	ft_lstadd_front(&node1, node2);



	current  =  node1;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
    return 0;
}
