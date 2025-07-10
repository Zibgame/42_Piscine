/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                                     :+:      :+: :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: Zibgame cadinot.zibrian@gmail.com           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 by Zibgame                  #+#    #+#               */
/*   Updated: 2025/07/10 by Zibgame                 ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str) {
  int i = 0;

  while (str[i] != '\0') {
    if (!(str[i] >= 'A' && str[i] <= 'Z')) {
      return 0;
    }
    i++;
  }
  return 1;
}

/*

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void) {
  printf("Test 1 (HELLO)     : %d\n", ft_str_is_uppercase("HELLO"));    // 1
  printf("Test 2 (Hello)     : %d\n", ft_str_is_uppercase("Hello"));    // 0
  printf("Test 3 (123ABC)    : %d\n", ft_str_is_uppercase("123ABC"));   // 0
  printf("Test 4 (empty)     : %d\n", ft_str_is_uppercase(""));         // 1
  printf("Test 5 (ABCDEFGZ)  : %d\n", ft_str_is_uppercase("ABCDEFGZ")); // 1
  return 0;
}
*/
