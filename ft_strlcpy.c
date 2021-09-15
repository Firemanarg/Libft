#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	if (size == 0)
		return (ft_strlen(src));
	len = 0;
	while (*(src + len) != '\0')
	{
		if (len < size - 1)
		{
			*dst = *(src + len);
			dst++;
		}
		len += 1;
	}
	*dst = '\0';
	return (len);
}
