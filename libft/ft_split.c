/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:22:32 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/08 19:24:47 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	isdelimiter;
	int	words;

	isdelimiter = 1;
	words = 0;
	while (s && *s)
	{
		if (*s == c)
			isdelimiter = 1;
		else if (*s != c && isdelimiter)
		{
			isdelimiter = 0;
			words++;
		}
		s++;
	}
	return (words);
}

static void	ft_fillarr(char **res, char *str, int wcnt, char c)
{
	int	i;
	int	wordlen;

	i = 0;
	wordlen = 0;
	while (wcnt -- && str && *str)
	{
		while (str[wordlen] != c && str[wordlen])
			wordlen++;
		res[i] = wordlen + 1;
		while (*str == c)
			str++;
		wordlen = 0;
		i++;
	}
	res[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		wcnt;
	char	*trimmedstr;
	char	**result;

	wcnt = ft_wordcount(s, c);
	*trimmedstr = ft_strtrim(s, &c);
	if (!trimmedstr)
		return (NULL);
	**result = malloc (sizeof(char *) * (wcnt + 1));
	if (!result)
	{
		free(trimmedstr);
		return (NULL);
	}
	ft_fillarr(result, trimmedstr, wcnt, c);
	free(trimmedstr);
	return (result);
}
