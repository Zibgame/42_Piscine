/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:33:18 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/17 10:56:26 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *copy_to(char src[], char dest[])
{
	int i;

	i = 0;
	while(src[i]) 
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*arr;
	char	*res;

	i = 0;
	while (src[i])
	{
		i++;
	}
	arr = malloc(i  * sizeof(char));
	res = copy_to(src, arr);
	return res;
}
/*
int main()
{
	char	*src = "salut";
	ft_strdup(src);
	return (0);
}
*/
