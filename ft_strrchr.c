#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last = (char *) s;
		s++;
	}
	if (c == '\0')
		last = (char *) s;
	return (last);
}
