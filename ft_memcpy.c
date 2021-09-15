#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*b_value_dest;
	unsigned char	*b_value_src;

	i = 0;
	while (i < n)
	{
		b_value_dest = (unsigned char *)(dest + i);
		b_value_src = (unsigned char *)(src + i);
		*b_value_dest = *b_value_src;
		i += 1;
	}
	return (dest);
}
