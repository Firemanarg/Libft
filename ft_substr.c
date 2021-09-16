#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;
	size_t	subs_len;

	s_len = ft_strlen(s);
	subs_len = len;
	if (start >= s_len)
		return (ft_strdup(""));
	else if (start + len >= s_len)
		subs_len = s_len - start;
	subs = ft_calloc(subs_len + 1, sizeof(char));
	if (!subs)
		return ((void *) 0);
	ft_strlcpy(subs, (s + start), subs_len + 1);
	return (subs);
}

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
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
}*/
