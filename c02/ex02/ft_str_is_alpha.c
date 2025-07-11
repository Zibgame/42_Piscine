/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:20:56 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/11 11:27:02 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	bool;

	i = 0;
	bool = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || \
				(str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (bool);
}
/*
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void) {
  char *test1 = "HelloWorld";
  char *test2 = "Hello123";
  char *test3 = "";
  char *test4 = "Bonjour!";
  char *test5 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

  printf("Test 1 (HelloWorld) : %d\n", ft_str_is_alpha(test1)); // 1
  printf("Test 2 (Hello123) : %d\n", ft_str_is_alpha(test2));   // 0
  printf("Test 3 (empty) : %d\n", ft_str_is_alpha(test3));      // 1
  printf("Test 4 (Bonjour!) : %d\n", ft_str_is_alpha(test4));   // 0
  printf("Test 5 (alpha only) : %d\n", ft_str_is_alpha(test5)); // 1

  return 0;
}
*/
