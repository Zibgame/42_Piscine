/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 00:41:59 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/15 00:42:01 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while(dest[i] != '\0')		
		i++;
	while(src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}
