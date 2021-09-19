/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:14:11 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/19 11:56:17 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*b_value_dest;
	unsigned char	*b_value_src;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		b_value_dest = (unsigned char *)(dest + i);
		b_value_src = (unsigned char *)(src + i);
		*b_value_dest = *b_value_src;
		i += 1;
	}
	return (dest);
}
