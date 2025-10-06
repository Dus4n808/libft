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

static void testiteri(unsigned int i, char *str)
{
	(void)i;
	*str = 'A';
}

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
static void *upper_copy(void *content)
{
	char *str;
	char *copy;
	int i;

	i = 0;
	str = (char *)content;
	copy = ft_strdup(str);
	if (!copy)
		return (NULL);
	while (copy[i])
	{
		if (ft_toupper(copy[i]))
			copy[i] += 32;
		i++;
	}
	return (copy);
}

int main(void)
{
	printf("========== ft_atoi =================\n");
	printf("== fausse fonction atoi : %d\n", ft_atoi("12"));
	printf("== vrai fonction atoi : %d\n", atoi("12"));
	printf("============ft_bzero ===============\n");
	char bzerotest[10] = "bzero";
	printf("%s\n", bzerotest);
	ft_bzero(bzerotest, 10);
	printf("%s\n", bzerotest);
	printf("============ft_itoa ===============\n");
	printf("%s\n", ft_itoa(12));

	printf("=============ft_memchr==============\n");
	char *string_memchr = "coucou les loulou";
	printf("vrai fonction :\n %s\n", (char *)memchr(string_memchr, 'l', 10));
	printf("fausse fonction :\n %s\n", (char *)ft_memchr(string_memchr, 'l', 10));

	printf("=============ft_memcmp==============\n");
	char *cmp1 = "coucou";
	char *cmp2 = "lol";
	printf("vrai fonction :\n%d\n", memcmp(cmp1, cmp2, 4));
	printf("fausse fonction :\n%d\n", ft_memcmp(cmp1, cmp2, 4));

	printf("=============ft_memcpy==============\n");
	char cmpydst[20];
	char *cmpysrc = "test memcpy";
	printf("vrai fonction :\n%s\n", (char *)memcpy(cmpydst, cmpysrc, 11));
	printf("fausse fonction :\n%s\n", (char *)ft_memcpy(cmpydst, cmpysrc, 11));

	printf("=============ft_split==============\n");
	char *strsplit = "test de split et tout fonctionne";
	char **tab;
	tab = ft_split(strsplit, ' ');
	while (*tab)
	{
		printf("%s\n", *tab++);
	}
	printf("=============ft_strchr==============\n");
	char *testchr = "cherche le l ici";
	printf("vrai fonction :\n%s\n", strchr(testchr, 'l'));
	printf("fausse fonction :\n%s\n", ft_strchr(testchr, 'l'));

	printf("=============ft_striter==============\n");
	char testiter[] = "test de iter";
	ft_striteri(testiter, testiteri);
	printf("%s\n", testiter);

	printf("=============ft_strjoin==============\n");
	char *strjoin1 = "coucou";
	//char *strjoin2 = "lol";
	printf("%s\n", ft_strjoin(strjoin1, NULL));

	printf("===========================\n");

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
	printf("%d\n", ft_lstsize(mylist));
	t_list *mapp_list = NULL;

	mapp_list = ft_lstmap(mylist, upper_copy, del_element);
	ft_lstclear(&mylist, del_element);
	printf("%d\n", ft_lstsize(mylist));
	current = mapp_list;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("%d\n", ft_lstsize(mapp_list));
}
