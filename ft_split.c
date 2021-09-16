#include "libft.h"

static char	**ft_freeall(char **array, size_t i)
{
	while (i >= 0)
	{
		free(*(array + i));
		i -= 1;
	}
	free(array);
	return ((void *) 0);
}

static size_t	ft_skip_separators(char const *s, char c, size_t i)
{
	while (*((s + i) + 1) == c)
		i += 1;
	i += 1;
	return (i);
}

static size_t	ft_countchr(char const *s, char c)
{
	size_t	last_is_sep;
	size_t	count;
	size_t	i;

	last_is_sep = 1;
	count = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		while (*(s + i) != c && *(s + i) != '\0')
		{
			last_is_sep = 0;
			i += 1;
		}
		if (*(s + i) == c)
		{
			i = ft_skip_separators(s, c, i);
			if (!(last_is_sep))
				count += 1;
			last_is_sep = 1;
		}
		else if (*(s + i) == '\0' && !(last_is_sep))
			count += 1;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	elm_count;
	char	**array;
	size_t	curr_str;
	size_t	start;
	size_t	end;

	elm_count = ft_countchr(s, c);
	array = ft_calloc(elm_count + 1, sizeof(char *));
	curr_str = 0;
	start = 0;
	while (curr_str < elm_count)
	{
		while (*(s + start) == c)
			start += 1;
		end = start;
		while (*(s + end) != c && *(s + end) != '\0')
			end += 1;
		*(array + curr_str) = ft_substr(s, start, end - start);
		if (!*(array + curr_str))
			return (ft_freeall(array, curr_str));
		start = end;
		curr_str += 1;
	}
	*(array + elm_count) = (void *) 0;
	return (array);
}
