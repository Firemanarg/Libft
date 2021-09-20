/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:47 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/20 08:58:53 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	len;

	if (!s)
	{
		len = ft_strlen(s);
		new_str = ft_calloc(len + 1, sizeof(char));
		if (!new_str)
			return (NULL);
		ft_strlcpy(new_str, s, len + 1);
		return (new_str);
	}
	return (NULL);
}
