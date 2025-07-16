/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:13:16 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/16 14:54:10 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	if (nb <= 0)
		return (0);
	res = 1;
	while (res * res < nb)
	{
		res++;
	}
	if (res * res == nb)
		return (res);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb = 25;
	int	res;

	res = ft_sqrt(nb);
	printf("racine carrée de %d = %d\n", nb, res);
	return (0);
}
*/
