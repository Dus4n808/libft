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

static void del_element(void *content)
{
	(void)content;
}
int main(void)
{

	t_list *mylist;

	mylist = ft_lstnew((char *)"coucou");



	t_list *newnode;


	newnode = ft_lstnew((char *)"Lol");


	ft_lstadd_front(&mylist, newnode);

	t_list *current;

	current = mylist;

	t_list *node1 = ft_lstnew((char *)"nouveau");
	ft_lstadd_front(&mylist, node1);

	printf("%s\n", (char *)mylist->content);

	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	current = mylist;
	t_list *lastnode = ft_lstlast(mylist);

	printf("%d\n", ft_lstsize(mylist));
	printf("%s\n", (char *)lastnode->content);
	t_list *node2 = ft_lstnew((char *)"dernier");

	ft_lstadd_back(&mylist, node2);
	ft_lstdelone(ft_lstlast(mylist), del_element);
	current = mylist;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}
