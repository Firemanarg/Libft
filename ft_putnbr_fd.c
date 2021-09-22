/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:59 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/22 14:11:11 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_rec(unsigned int n, int fd)
{
	unsigned int	ncpy;

	ncpy = n;
	while (n / 10 != 0)
		n /= 10;
	write(fd, &('0' + n), 1);
	if (n != 0)
		ft_putnbr_rec(ncpy / 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		nbr = n * -1;
		write(fd, "-", 1);
	}
	else
		nbr = n;
	ft_putnbr_rec(nbr, fd);
}

/*
void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	nbr = ft_itoa(n);
	if (nbr)
	{
		ft_putstr_fd(nbr, fd);
		free(nbr);
	}
}
*/
