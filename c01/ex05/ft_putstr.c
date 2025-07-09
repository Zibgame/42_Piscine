/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zibgame cadinot.zibrian@gmail.com           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 by Zibgame                  #+#    #+#               */
/*   Updated: 2025/07/09 by Zibgame                 ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putstr(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    write(1, &str[i], 1);
    i++;
  }
}

/*
int main(void) {
  char *message = "Bonjour, ceci est un test.\n";
  ft_putstr(message);
  return 0;
}
*/
