/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:52 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/24 12:10:10 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i += 1;
			count += 1;
		}
		else
			i += 1;
	}
	return (count);
}

static void	freeall(char **array, size_t curr_index)
{
	while (curr_index > 0)
	{
		free(*(array + curr_index));
		curr_index -= 1;
	}
	free(array[0]);
	free(array);
}

static char	**fill_array(char const *s, char c, char **array)
{
	size_t	i;
	size_t	found_chr;
	size_t	curr_str;

	i = 0;
	curr_str = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			found_chr = i;
			while (s[i] != c && s[i] != '\0')
				i += 1;
			array[curr_str] = ft_substr(s, found_chr, (i - found_chr));
			if (array[curr_str] == NULL)
			{
				freeall(array, i);
				return (NULL);
			}
			curr_str += 1;
		}
		else
			i += 1;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	wc;

	if (!s)
		return (NULL);
	wc = word_count(s, c);
	array = ft_calloc(wc + 1, sizeof(char *));
	if (!array)
		return (NULL);
	array = fill_array(s, c, array);
	if (array)
		array[wc] = NULL;
	return (array);
}
