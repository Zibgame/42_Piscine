/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:18:11 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/11 11:20:35 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void) {
  char src[] = "Hello";
  char dest1[10];
  char dest2[10];
  char dest3[10];

  ft_strncpy(dest1, src, 10);
  ft_strncpy(dest2, src, 3);
  ft_strncpy(dest3, src, 5);

  printf("src    : \"%s\"\n", src);
  printf("dest1 (n=10): \"%s\"\n", dest1);
  printf("dest2 (n=3) : \"%s\"\n", dest2);
  printf("dest3 (n=5) : \"%s\"\n", dest3);

  return (0);
}
*/
