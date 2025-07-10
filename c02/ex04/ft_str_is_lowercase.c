/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                                     :+:      :+: :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: Zibgame cadinot.zibrian@gmail.com           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 by Zibgame                  #+#    #+#               */
/*   Updated: 2025/07/10 by Zibgame                 ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str) {
  int i = 0;

  while (str[i] != '\0') {
    if (!(str[i] >= 'a' && str[i] <= 'z')) {
      return 0;
    }
    i++;
  }
  return 1;
}
/*
#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void) {
  printf("Test 1 (bonjour)   : %d\n", ft_str_is_lowercase("bonjour"));   // 1
  printf("Test 2 (BonJour)   : %d\n", ft_str_is_lowercase("BonJour"));   // 0
  printf("Test 3 (empty)     : %d\n", ft_str_is_lowercase(""));          // 1
  printf("Test 4 (123abc)    : %d\n", ft_str_is_lowercase("123abc"));    // 0
  printf("Test 5 (lowercase) : %d\n", ft_str_is_lowercase("abcdefxyz")); // 1
  return 0;
}
*/
