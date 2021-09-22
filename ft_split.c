/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:52 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/20 09:59:09 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**array;
	char	*ptr;
	char	*last_found;

	if (!s)
		return (NULL);
	ptr = s;
	count = 0;
	while (*ptr != '\0')
	{
		while (*ptr == c)
			ptr++;
		count += 1;
		ptr++;
	}
	array = ft_calloc(count + 1, typeof(char *));
	if (!array)
		return (NULL);
	ptr = s;
	while (*ptr != '\0')
	{
		while (*ptr == c)
			ptr++;
		count += 1;
		ptr++;
	}
}

/*static char	**ft_freeall(char **array, size_t i)
{
	while (i > 0)
	{
		free(*(array + i));
		i -= 1;
	}
	free(*array);
	free(array);
	return (NULL);
}

static size_t	ft_skip_separators(char const *s, char c, size_t i)
{
	while (*((s + i) + 1) == c)
		i += 1;
	i += 1;
	return (i);
}

static size_t	ft_countchr(char const *s, char c)
{
	size_t	last_is_sep;
	size_t	count;
	size_t	i;

	last_is_sep = 1;
	count = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		while (*(s + i) != c && *(s + i) != '\0')
		{
			last_is_sep = 0;
			i += 1;
		}
		if (*(s + i) == c)
		{
			i = ft_skip_separators(s, c, i);
			if (!(last_is_sep))
				count += 1;
			last_is_sep = 1;
		}
		else if (*(s + i) == '\0' && !(last_is_sep))
			count += 1;
	}
	return (count);
}

static char	**ft_generate_array(char const *s, char c, size_t elm_count)
{
	char	**array;
	size_t	curr_str;
	size_t	start;
	size_t	end;

	array = ft_calloc(elm_count + 1, sizeof(char *));
	curr_str = 0;
	start = 0;
	while (curr_str < elm_count)
	{
		while (*(s + start) == c)
			start += 1;
		end = start;
		while (*(s + end) != c && *(s + end) != '\0')
			end += 1;
		*(array + curr_str) = ft_substr(s, start, end - start);
		if (!*(array + curr_str))
			return (ft_freeall(array, curr_str));
		start = end;
		curr_str += 1;
	}
	*(array + elm_count) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	elm_count;

	if (!*s)
	{
		array = ft_calloc(1, sizeof(char *));
		elm_count = 0;
	}
	else if (c == '\0')
	{
		array = ft_calloc(2, sizeof(char *));
		*array = ft_strdup(s);
		elm_count = 1;
	}
	else
	{
		elm_count = ft_countchr(s, c);
		array = ft_generate_array(s, c, elm_count);
	}
	if (!array)
		return (NULL);
	*(array + elm_count) = NULL;
	return (array);
}
*/
