/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:52 by lsilva-q          #+#    #+#             */
/*   Updated: 2021/09/24 12:02:11 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static size_t	str_quantity(char const *str, char del);
static void		complement_split(char const *s, char c, char **arr);

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = ft_calloc(str_quantity(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	complement_split(s, c, arr);
	return (arr);
}

static void	complement_split(char const *s, char c, char **arr)
{
	size_t	cont;
	size_t	cchr;
	size_t	carr;

	cont = 0;
	carr = -1;
	while (s[cont] != '\0')
	{
		if (s[cont] == c)
			cont++;
		else
		{
			cchr = 0;
			while (s[cont] != c && s[cont] != '\0')
			{
				cont++;
				cchr++;
			}
			arr[++carr] = ft_calloc(cchr + 1, sizeof(char));
			ft_strlcpy(arr[carr], &s[cont - cchr], cchr + 1);
		}
	}
}

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
}*/

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

/*
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
		last_found = ptr;
		ptr++;
	}
}
*/
/*
static char	**ft_freeall(char **array, size_t i)
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
		array[0] = ft_strdup(s);
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
