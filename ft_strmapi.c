/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:24 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/24 13:32:10 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	if (s)
	{
		newstr = ft_strdup(s);
		if (!newstr)
			return (NULL);
		i = 0;
		while (newstr[i] != '\0')
		{
			newstr[i] = f(i, newstr[i]);
			i += 1;
		}
		return (newstr);
	}
	return (NULL);
}
