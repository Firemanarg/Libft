#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;

	subs = ft_calloc(len + 1, sizeof(char));
	if (!subs)
		return (NULL);
	ft_strlcpy(subs, (s + start), len + 1);
	return (subs);
}
