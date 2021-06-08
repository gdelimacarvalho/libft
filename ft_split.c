/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:28:29 by gade-lim          #+#    #+#             */
/*   Updated: 2021/06/08 14:59:12 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numberof_words(char const *s, char c)
{
	size_t	n_words;
	size_t	i;

	i = 0;
	n_words = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			n_words++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (n_words);
}

static size_t	ft_strlenchar(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	**ft_mallocfail(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	size_t	i;
	size_t	j;
	char	**res;

	i = 0;
	n_words = ft_numberof_words(s, c);
	res = (char **)ft_calloc(n_words + 1, sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < n_words)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		res[i] = ft_substr((char *)(s + j), 0,
				ft_strlenchar((char *)(s + j), c));
		if (res[i] == NULL)
			ft_mallocfail(res);
		j = j + ft_strlenchar((char *)(s + j), c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
