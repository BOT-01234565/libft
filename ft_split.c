/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelbouz <amelbouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:53:56 by amelbouz          #+#    #+#             */
/*   Updated: 2026/10/21 19:05:17 by amelbouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			res++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (res);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	*free_all(char **words, int j)
{
	j--;
	while (j >= 0)
		free(words[j--]);
	free(words);
	return (NULL);
}

static char	*get_word(char const *s, char c, int *i)
{
	char	*res;
	int		len;

	while (s[*i] && s[*i] == c)
		(*i)++;
	if (s[*i])
	{
		len = word_len(&s[*i], c) + 1;
		res = malloc(len);
		if (!res)
			return (NULL);
		ft_strlcpy(res, &s[*i], len);
		*i += len - 1;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	words = malloc(count_words(s, c) + 1);
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			words[j] = get_word(s, c, &i);
			if (!words[j])
				return (free_all(words, j));
		}
		j++;
	}
	words[j] = NULL;
	return (words);
}
