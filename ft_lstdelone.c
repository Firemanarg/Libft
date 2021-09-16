#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
		del((void *) lst);
	if (lst)
		free(lst);
}
