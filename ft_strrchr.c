#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	cc;

	cc = c;
	last = (void *) 0;
	while (*s != '\0')
	{
		if (*s == cc)
			last = (char *) s;
		s++;
	}
	if (cc == '\0')
		last = (char *) s;
	return (last);
}
