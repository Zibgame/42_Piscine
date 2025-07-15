/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 23:26:21 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/15 23:35:44 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int res;

    res = 1;
    if (power < 0)
    {
        return (0);
    }
    else if (power == 0)
    {
        return (1);
    }
    while  (power > 0)
    {
        res *= nb;
        power--;
    }
    return (res);
}
