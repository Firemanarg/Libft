/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:14:07 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/24 13:22:38 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	byte;
	unsigned char	uc;
	unsigned char	*ucs;

	byte = 0;
	uc = (unsigned char) c;
	ucs = (unsigned char *) s;
	while (byte < n)
	{
		ucs[byte] = uc;
		byte += 1;
	}
	return (s);
}
