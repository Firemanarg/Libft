#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*newstr;
	size_t	len;

	len = ft_strlen(s);
	newstr = ft_calloc(len + 2, sizeof(char));
	if (!newstr)
		return ;
	ft_strlcpy(newstr, s, len + 2);
	*(newstr + len) = '\n';
	*(newstr + len + 1) = '\0';
	ft_putstr_fd(newstr, fd);
}
