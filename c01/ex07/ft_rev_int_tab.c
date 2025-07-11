/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 09:16:28 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/10 14:54:39 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size) {
  int count;
  int temp;

  count = 0;
  while (count < size / 2) {
    temp = tab[count];
    tab[count] = tab[size - (count + 1)];
    tab[size - (count + 1)] = temp;
    count++;
  }
}

/*
int main() {
        int arr[] = {1, 2, 3, 4};
        ft_rev_int_tab(arr, 4);
        printf("tab0 = %d",arr[0]);
        return (0);
}
*/
