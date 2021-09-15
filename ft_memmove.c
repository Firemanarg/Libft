#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*b_value_dest;
	unsigned char	*b_value_src;

	if ((dest >= src) && (dest <= (src + (n - 1))))
	{
		i = 0;
		while (i < n)
		{
			b_value_dest = (unsigned char *)((dest + (n - 1)) - i);
			b_value_src = (unsigned char *)((src + (n - 1)) - i);
			*b_value_dest = *b_value_src;
			i += 1;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
