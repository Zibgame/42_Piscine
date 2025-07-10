/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                     :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: Zibgame cadinot.zibrian@gmail.com           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 by Zibgame                  #+#    #+#               */
/*   Updated: 2025/07/10 by Zibgame                 ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str) {
  int i;

  i = 0;
  while (str[i] != '\0') {
    if (!(str[i] >= '0' && str[i] <= '9')) {
      return 0;
    }
    i++;
  }
  return 1;
}
/*
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void) {
  char *test1 = "123456";
  char *test2 = "42school";
  char *test3 = "";
  char *test4 = "0000";
  char *test5 = "12 34";

  printf("Test 1 (\"123456\")      : %d\n", ft_str_is_numeric(test1)); // 1
  printf("Test 2 (\"42school\")    : %d\n", ft_str_is_numeric(test2)); // 0
  printf("Test 3 (\"\")            : %d\n", ft_str_is_numeric(test3)); // 1
  printf("Test 4 (\"0000\")        : %d\n", ft_str_is_numeric(test4)); // 1
  printf("Test 5 (\"12 34\")       : %d\n", ft_str_is_numeric(test5)); // 0

  return 0;
}
*/
