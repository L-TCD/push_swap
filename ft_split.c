/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:37:16 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/15 06:36:02 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

static char	*ft_strndup(const char *str, int n)
{
	int		i;
	int		len_max;
	char	*dest;

	len_max = 0;
	while (str[len_max])
		len_max++;
	if (len_max > n)
		len_max = n;
	dest = malloc(len_max + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len_max)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	free_all(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

static char	**fill_arr(char **strs, char const *s, char c)
{
	int		i;
	int		j;
	int		index;

	strs[word_count(s, c)] = 0;
	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		strs[index] = ft_strndup(&s[j], (i - j));
		if (strs[index++] == NULL)
		{
			free_all(strs);
			return (NULL);
		}
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!strs)
		return (NULL);
	strs = fill_arr(strs, s, c);
	return (strs);
}
