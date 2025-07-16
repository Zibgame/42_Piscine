/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 23:02:13 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/16 11:44:40 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int i;
    int res;

    i = 1;
    res = 1;
    if  (nb < 0)
        return 0;
    while (i <= nb)
    {
        res *= i;
        i++;
    }
    return (res);
}
/*
#include <stdio.h>
int main()
{
    int nb;

    nb = 3;
    printf("%d",ft_iterative_factorial(nb));
    return (0);
}
*/
