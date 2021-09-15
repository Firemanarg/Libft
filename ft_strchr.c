#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = c;
	while (*s != '\0')
	{
		if (*s == cc)
			return ((char *) s);
		s++;
	}
	if (cc == '\0')
		return ((char *) s);
	return ((void *) 0);
}
