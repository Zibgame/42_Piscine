/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 19:38:45 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/20 20:50:00 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	calc_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;
	int	sep_len;

	total = 0;
	sep_len = str_len(sep);
	i = 0;
	while (i < size)
	{
		total += str_len(strs[i]);
		i++;
	}
	total += sep_len * (size - 1);
	return (total);
}

void	fill_res(char *res, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	l;
	int	sep_len;

	i = 0;
	l = 0;
	sep_len = str_len(sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			res[l++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (j < sep_len)
				res[l++] = sep[j++];
		}
		i++;
	}
	res[l] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		total_len;

	if (size == 0)
	{
		res = malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	total_len = calc_total_len(size, strs, sep);
	res = malloc(sizeof(char) * (total_len + 1));
	if (!res)
		return (NULL);
	fill_res(res, size, strs, sep);
	return (res);
}

/* #include <stdio.h> */
/* int main(void) */
/* { */
/*     int size = 4; */
/*     char *strings[] = {"Hello", "world", "ist", "42"}; */
/*     char *sep = ", "; */
/*     char *result; */

/*     result = ft_strjoin(size, strings, sep); */
/*     if (result == NULL) */
/*     { */
/*         printf("erreur d'allocation\n"); */
/*         return (1); */
/*     } */
/*     printf("resultat = %s\n", result); */
/*     free(result); */
/*     return (0); */
/* } */
