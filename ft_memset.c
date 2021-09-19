/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:14:07 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/19 11:14:07 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	byte;

	byte = 0;
	while (byte < n)
	{
		*((unsigned char *)(s + byte)) = (unsigned char) c;
		byte += 1;
	}
	return (s);
}
