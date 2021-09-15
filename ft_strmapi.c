#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	newstr = ft_strdup(s);
	if (!newstr)
		return (NULL);
	i = 0;
	while (*(newstr + i) != '\0')
	{
		*(newstr + i) = f(i, *(newstr + i));
		i += 1;
	}
	return (newstr);
}
