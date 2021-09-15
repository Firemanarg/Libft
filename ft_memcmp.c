#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*uns_chr1;
	unsigned char	*uns_chr2;

	uns_chr1 = (unsigned char *) s1;
	uns_chr2 = (unsigned char *) s2;
	i = 0;
	while ((*(uns_chr1 + i) || *(uns_chr2 + i)) && (i < n))
	{
		if (*(uns_chr1 + i) != *(uns_chr2 + i))
			return (*(uns_chr1 + i) - *(uns_chr2 + i));
		i += 1;
	}
	return (0);
}
