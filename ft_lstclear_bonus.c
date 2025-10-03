#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	current = *lst;
	if (!lst || !del)
		return;
	while (current->next != NULL)
	{
		del(current->content);
		free(current);
		current = current->next;
	}
	current->next = NULL;
}
