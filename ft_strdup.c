#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	len;

	len = ft_strlen(s);
	new_str = ft_calloc(len + 1, sizeof(char));
	ft_strlcpy(new_str, s, len + 1);
	return (new_str);
}
