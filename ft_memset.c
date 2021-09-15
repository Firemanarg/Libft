#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	byte;

	byte = 0;
	while (byte < n)
	{
		*((unsigned char *)(s + byte)) = (unsigned char) c;
		byte += 1;
	}
	return (s);
}
