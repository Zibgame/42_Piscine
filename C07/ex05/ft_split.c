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
	long	i;

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
	long	i;
	long	words;
	int		in_word;

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

char	*ft_copy_words(char *str, long start, long end)
{
	long	i;
	long	len;
	char	*res;

	len = end - start;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		res[i] = str[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

long	ft_is_not_sep(char *str, char *sep, long start)
{
	long	len;

	len = 0;
	while (str[start + len] && !ft_is_sep(str[start + len], sep))
		len++;
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	long	start;
	int		in_word;
	long	len;
	long	i;
	long	j;

	i = 0;
	j = 0;
	in_word = 1;
	res = malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (str[i])
	{
		if (in_word && !ft_is_sep(str[i], charset))
		{
			in_word = 0;
			start = i;
			len = ft_is_not_sep(str, charset, start);
			res[j++] = ft_copy_words(str, start, start + len);
			i += len - 1;
		}
		else if (ft_is_sep(str[i], charset))
			in_word = 1;
		i++;
	}
	res[j] = NULL;
	return (res);
}
