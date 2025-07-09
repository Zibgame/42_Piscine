/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                                     :+:      :+: :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: Zibgame cadinot.zibrian@gmail.com           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 by Zibgame                  #+#    #+#               */
/*   Updated: 2025/07/09 by Zibgame                 ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b) {
  int temp_a = *a;
  *a = *a / *b;
  *b = temp_a % *b;
}

/*
#include <stdio.h>

int main() {
  int a = 10;
  int b = 3;

  ft_ultimate_div_mod(&a, &b);

  printf("Resultat (quotient) : %d\n", a);
  printf("Reste (modulo) : %d\n", b);

  return 0;
}
*/
