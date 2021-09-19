/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:37 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/19 11:13:38 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize > ft_strlen(dst) + 1)
	{
		while ((dstlen + i) < (dstsize - 1) && *(src + i) != '\0')
		{
			*(dst + (dstlen + i)) = *(src + i);
			i++;
		}
		*(dst + (dstlen + i)) = '\0';
	}
	if (dstsize < dstlen)
		return (ft_strlen(src) + dstsize);
	return (ft_strlen(src) + dstlen);
}
