/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:20 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/19 21:42:09 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*uns_chr1;
	unsigned char	*uns_chr2;

	uns_chr1 = (unsigned char *) s1;
	uns_chr2 = (unsigned char *) s2;
	i = 0;
	while (s1 && s2 && i < n)
		i += 1;
	return (*(uns_chr1 + i) - *(uns_chr2 + i));
}
