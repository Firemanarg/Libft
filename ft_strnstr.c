#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (len > 0)
	{
		if (*little == '\0')
			return ((char *) big);
		little_len = ft_strlen(little);
		i = 0;
		while (i < len - little_len)
		{
			if (ft_strncmp((big + i), (little), little_len) == 0)
				return ((char *)(big + i));
			i += 1;
		}
	}
	return ((void *) 0);
}
