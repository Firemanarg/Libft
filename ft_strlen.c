#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*(str + len) != '\0')
		len += 1;
	return (len);
}
