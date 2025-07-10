/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 09:16:28 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/10 10:47:13 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
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
