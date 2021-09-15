#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len;
	subs = ft_calloc(len + 1, sizeof(char));
	if (!subs)
		return ((void *) 0);
	ft_strlcpy(subs, (s + start), len + 1);
	return (subs);
}
