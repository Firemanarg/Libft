#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	while (lst)
	{
		size += 1;
		lst = lst->next;
	}
	return (size);
}
