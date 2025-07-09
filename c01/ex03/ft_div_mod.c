/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zibgame cadinot.zibrian@gmail.com           +#+  +:u+       +#+ */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 by Zibgame                  #+#    #+#               */
/*   Updated: 2025/07/09 by Zibgame                 ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod) {
  if (a == 0 || b == 0) {
    return;
  }
  *div = a / b;
  *mod = a % b;
}

/*
#include <stdio.h>
int main() {
  int a = 10;
  int b = 2;
  int res = 0;
  int reste = 0;

  ft_div_mod(a, b, &res, &reste);
  printf("Resultat : %d, Reste : %d\n", res, reste);

  return 0;
}
*/
