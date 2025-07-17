/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:33:03 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/17 15:45:27 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i = 0;
	unsigned int	j = 0;
	unsigned int	src_len = 0;
	unsigned int	dest_len = 0;

	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	if (dest_len >= size)
		return (size + src_len);
	i = dest_len;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}
