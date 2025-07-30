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

char	*ft_copy_words(char *str, int start, int end)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc((end - start + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (start + i < end)
	{
		res[i] = str[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

void	ft_fill_split(char **res, char *str, char *sep)
{
	int	i;
	int	j;
	int	in_word;
	int	start;
	int	len;

	i = 0;
	j = 0;
	in_word = 1;
	while (str[i])
	{
		if (in_word && !ft_is_sep(str[i], sep))
		{
			in_word = 0;
			start = i;
			len = 0;
			while (str[i + len] && !ft_is_sep(str[i + len], sep))
				len++;
			res[j++] = ft_copy_words(str, start, start + len);
			i += len - 1;
		}
		else if (ft_is_sep(str[i], sep))
			in_word = 1;
		i++;
	}
	res[j] = NULL;
}

char	**ft_split(char *str, char *sep)
{
	char	**res;

	res = malloc((ft_count_words(str, sep) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	ft_fill_split(res, str, sep);
	return (res);
}

