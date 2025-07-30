/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:38:46 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/30 00:01:29 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int	i;
	int	words;
	int	in_word;

	i = 0;
	words = 0;
	in_word = 1;
	while (str[i])
	{
		if (in_word && !ft_is_sep(str[i], sep))
		{
			words++;
			in_word = 0;
		}
		if (ft_is_sep(str[i], sep))
			in_word = 1;
		i++;
	}
	return (words);
}

char	*ft_word_dup(char *str, char *sep)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (str[len] && !ft_is_sep(str[len], sep))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *sep)
{
	int		i;
	int		word_count;
	char	**tab;

	i = 0;
	word_count = ft_count_words(str, sep);
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	while (*str)
	{
		while (*str && ft_is_sep(*str, sep))
			str++;
		if (*str)
		{
			tab[i++] = ft_word_dup(str, sep);
			while (*str && !ft_is_sep(*str, sep))
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
