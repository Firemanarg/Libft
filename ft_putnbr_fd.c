/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:59 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/22 14:49:43 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_rec(unsigned int n, int fd, int mult)
{
	char			c;
	unsigned int	tmp;

	if (mult > 0)
	{
		c = '0' + (n / mult);
		write(fd, &c, 1);
		tmp = n / mult;
		tmp *= mult;
		ft_putnbr_rec((n - tmp), fd, mult / 10);
	}
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	int				mult;
	unsigned int	nbr;

	mult = 1;
	while (n / (mult * 10) != 0)
		mult *= 10;
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = n * -1;
	}
	else
		nbr = n;
	ft_putnbr_rec(nbr, fd, mult);
}

/*static void	ft_putnbr_rec(unsigned int n, int fd)
{
	unsigned int	ncpy;
	char			c;

	ncpy = n;
	while (n / 10 != 0)
		n /= 10;
	c = '0' + n;
	write(fd, &c, 1);
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
}*/

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
