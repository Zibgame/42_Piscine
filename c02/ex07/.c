/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zibgame cadinot.zibrian@gmail.com           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 by Zibgame                  #+#    #+#               */
/*   Updated: 2025/07/10 by Zibgame                 ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str) {
  int i;

  i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32;
    }
    i++;
  }
  return str;
}

/*
#include <stdio.h>

char *ft_strupcase(char *str);

int main(void) {
  char str[] = "hello World!";

  printf("Before: %s\n", str);
  ft_strupcase(str);
  printf("After : %s\n", str);

  return 0;
}
*/
