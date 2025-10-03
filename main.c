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
	free(content);
}

static void up_element(void *content)
{
	char *p;
	int i;

	i = 0;
	p = (char *)content;
	while (p[i] != '\0')
	{
		p[i] -= 32;
		i++;
	}


}
int main(void)
{
	t_list *mylist;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew(ft_strdup("coucou"));
	node2 = ft_lstnew(ft_strdup("hello"));
	node3 = ft_lstnew(ft_strdup("bonjour"));

	mylist = NULL;


	ft_lstadd_back(&mylist, node1);
	ft_lstadd_back(&mylist, node2);
	ft_lstadd_back(&mylist, node3);

	t_list *current;

	current = mylist;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("============================\n");
	node1->next = node3;
	ft_lstdelone(node2,del_element);
	current = mylist;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("============================\n");
	ft_lstiter(mylist, up_element);
	current = mylist;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

}
