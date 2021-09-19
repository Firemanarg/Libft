/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:14:59 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/19 11:15:00 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

static void	ft_skip_whitespaces(size_t *i, const char *nptr)
{
	while (ft_is_whitespace(*(nptr + *i)))
		*i += 1;
}

static int	ft_get_signal(size_t *i, char c)
{
	int	signal;

	signal = 1;
	if (c == '-' || c == '+')
	{
		if (c == '-')
			signal = -1;
		*i += 1;
	}
	return (signal);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		nbr;
	int		signal;

	i = 0;
	nbr = 0;
	ft_skip_whitespaces(&i, nptr);
	signal = ft_get_signal(&i, *(nptr + i));
	while (ft_isdigit(*(nptr + i)))
	{
		nbr = (nbr * 10) + (*(nptr + i) - '0');
		i += 1;
	}
	nbr *= signal;
	return (nbr);
}
