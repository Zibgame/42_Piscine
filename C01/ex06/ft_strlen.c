/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 09:16:28 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/10 11:02:35 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*
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
*/
