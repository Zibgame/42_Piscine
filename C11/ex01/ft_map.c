/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 00:21:20 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/30 00:29:08 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
    int i;
    int *res;

    i = 0;
    res = malloc(length * sizeof(int));
    if (!res)
        return NULL;
    while (i < length)
    {
        res[i] = (*f)(tab[i]);
        i++;
    }
    return (res);
}

