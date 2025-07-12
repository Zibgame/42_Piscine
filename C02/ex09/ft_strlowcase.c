/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:08:26 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/12 18:25:10 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bool;

	i = 0;
	bool = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (bool && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			bool = 0;
		else
			bool = 1;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
int main() {
  int i;
  char str[] = "hi, how are you? 42WORDS forty-two; fifty+and+one";

  ft_strcapitalize(str);
  i = 0;
  while (str[i] != '\0') {
    write(1, &str[i], 1);
    i++;
  }
  return 0;
}
*/
