#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	size_t			i;

	i = 0;
	while (i < n)
	{
		uc_s = (unsigned char *)(s + i);
		if (*uc_s == (unsigned char ) c)
			return (uc_s);
		i += 1;
	}
	return (NULL);
}
