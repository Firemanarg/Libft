#include "libft.h"

static size_t	ft_find_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	while (i < s1_len)
	{
		if (ft_strchr(set, *(s1 + i)) == NULL)
			return (i);
		i += 1;
	}
	return (0);
}

static size_t	ft_find_end(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (ft_strchr(set, *(s1 + i)) == NULL)
			return (i);
		i -= 1;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*newstr;

	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (start == end)
		return (NULL);
	newstr = ft_substr(s1, start, (end - start) + 1);
	if (!newstr)
		return (NULL);
	return (newstr);
}
