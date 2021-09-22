/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:14:39 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/22 13:23:39 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function name:
**		> ft_count_digits
**	Parameters:
**		> n (int) : Number from which the digits will be counted
**	Description:
**		> Count how many digits the parameter n has, then return that amount
**	Return:
**		> (int). Return the amount of digits in number n
*/

static int	ft_count_digits(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len += 1;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	nbr;
	char			*str;

	len = ft_count_digits(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		nbr = n * (-1);
	}
	else
		nbr = n;
	while (nbr > 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		len -= 1;
	}
	return (str);
}

/*
static int	ft_get_signal(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int	ft_get_len(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (ft_get_signal(n) < 0)
		len += 1;
	while (n != 0)
	{
		len += 1;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		signal;
	int		i;
	char	*str;
	char	first_nbr;

	len = ft_get_len(n);
	signal = ft_get_signal(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	first_nbr = 0;
	if (signal < 0)
	{
		*str = '-';
		first_nbr = 1;
	}
	i = len - 1;
	while (i >= first_nbr)
	{
		*(str + i) = ((n % 10) * signal) + '0';
		n /= 10;
		i -= 1;
	}
	*(str + len) = '\0';
	return (str);
}
*/