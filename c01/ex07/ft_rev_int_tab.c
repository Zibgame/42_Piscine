/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 09:16:28 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/10 10:27:31 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	last;
	int	tmp;

	while (!(size < 2))
	{
		i = 0;
		last = 1;
		while (++i < size)
		{
			if (tab[i] < tab[i - 1])
			{
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
				last = i;
			}
		}
		size = last;
	}
}
/*
int main() {
    int arrx[] = { 6, 3, 6, 8, 4, 2, 5, 7 };

    ft_rev_int_tab(arrx, 8);
    for (int r = 0; r < 8; r++) {
        printf("index[%d] = %d\n", r, arrx[r]);
    }
    return(0);
}
*/
