/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zibgame cadinot.zibrian@gmail.com           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 by Zibgame                  #+#    #+#               */
/*   Updated: 2025/07/10 by Zibgame                 ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src) {
  int i;

  i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}

/*
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void) {
  char src[] = "Hello";
  char dest[10];

  ft_strcpy(dest, src);
  printf("src  = %s\n", src);
  printf("dest = %s\n", dest);
  return (0);
}
*/
