#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (*little == '\0')
		return ((char *) big);
	else if (len > 0 && *big)
	{
		little_len = ft_strlen(little);
		i = 0;
		while (i < len)
		{
			if (little_len + i < len
				&& ft_strncmp((big + i), (little), little_len) == 0)
				return ((char *)(big + i));
			i += 1;
		}
	}
	return ((void *) 0);
}
