/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:40 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/20 08:43:08 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*newstr;

	if (s1)
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		newstr = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
		if (!newstr)
			return (NULL);
		ft_strlcpy(newstr, s1, len_s1 + 1);
		ft_strlcat(newstr, s2, len_s1 + len_s2 + 1);
		return (newstr);
	}
	return (NULL);
}
