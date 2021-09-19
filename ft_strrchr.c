/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:11 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/19 11:13:12 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	cc;

	cc = c;
	last = (void *) 0;
	while (*s != '\0')
	{
		if (*s == cc)
			last = (char *) s;
		s++;
	}
	if (cc == '\0')
		last = (char *) s;
	return (last);
}
