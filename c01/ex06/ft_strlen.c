/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zibgame cadinot.zibrian@gmail.com           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 by Zibgame                  #+#    #+#               */
/*   Updated: 2025/07/09 by Zibgame                 ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}

#include <stdio.h>
int main(void) {
  char *test1 = "Hello";
  char *test2 = "";
  char *test3 = "Piscine 42 !";

  printf("Longueur de \"%s\" : %d\n", test1, ft_strlen(test1)); // 5
  printf("Longueur de \"%s\" : %d\n", test2, ft_strlen(test2)); // 0
  printf("Longueur de \"%s\" : %d\n", test3, ft_strlen(test3)); // 11

  return 0;
}
