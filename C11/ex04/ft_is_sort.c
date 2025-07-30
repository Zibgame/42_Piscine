/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:16:35 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/30 17:16:38 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_order(int cmp, int *order)
{
	if (cmp < 0)
	{
		if (*order == 0)
			*order = 1;
		else if (*order == -1)
			return (0);
	}
	else if (cmp > 0)
	{
		if (*order == 0)
			*order = -1;
		else if (*order == 1)
			return (0);
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	order;

	if (length <= 1)
		return (1);
	order = 0;
	i = 0;
	while (i < length - 1)
	{
		if (!check_order(f(tab[i], tab[i + 1]), &order))
			return (0);
		i++;
	}
	return (1);
}
