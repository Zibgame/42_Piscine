/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:13:43 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/11 11:15:58 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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
