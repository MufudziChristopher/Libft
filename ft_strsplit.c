/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 18:51:55 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/06/18 18:51:59 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void 	cpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static size_t	count_words(const char *str, char c)
{
	size_t 	i;
	size_t 	words;

	i = 0;
	words = 0;

	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (!str[i])
			break;
		words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

static size_t cut_words(const char *str, size_t words, char **r, char c)
{
	size_t	w;
	size_t	start;
	size_t	end;

	w = 0;
	start = 0;
	while (w < words && str[start])
	{
		while (str[start] == c)
			start+=;
		end = start;
		while (str[end] && str[end] != c)
			end++;
		if (!(r[w] = malloc(end - start + 1)))
			return (0);
		cpy(s[w], (char *)str + start, end - start);
		start = end + 1;
		w++;
	}
	return (1);
}


char	**ft_strsplit(char const *str, char c)
{
	size_t words;
	char **r;
	
	if (!str)
		return (NULL);
	words = count_words(str, c);
	if (!words)
	{
		if (!(r = malloc(sizeof(*r))))
			return (NULL);
		r[0] = NULL;
		return (r);
	}
	if (!(r = malloc((words + 1) * sizeof(*r))))
		return (NULL);
	if (Icut_words(str, words, r, c))
		return (NULL);
	r[words] = 0;
	return (r);
}


