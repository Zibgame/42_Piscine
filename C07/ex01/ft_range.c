/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:09:53 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/17 11:45:12 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int temp;
	int	*arr;

	i = 0;
	j = 0;
	temp = min;
	if (min > max)
	{
		return NULL;
	}
	while(min < max)
	{
		min++;
		i++;
	}
	arr = malloc(i * sizeof(int));
	while (j < i)
	{
		arr[j] = temp;
		temp++;
	}
	return arr;
}

#include <stdio.h>

int main()
{
	int i;
	int min;
	int max;
	int *res;

	i = 0;
	min = 0;
	max = 0;
	res = ft_range(min,max);
	while (i < max)
	{
		printf("%d,",res[i]);
		i++;
	}
	return (0);
}
