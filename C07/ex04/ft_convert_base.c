/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 23:01:37 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/23 23:02:53 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_valid_base(char *base);
int		ft_atoi_base(char *str, char *base);
int		count_digits(int nbr, int base_len);
int		ft_strlen(char *str);

char	*ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		len;
	char	*res;
	long	n;

	base_len = ft_strlen(base);
	len = count_digits(nbr, base_len);
	res = malloc(sizeof(char) * (len + 1));
	n = nbr;
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	if (n == 0)
		res[0] = base[0];
	while (n > 0)
	{
		res[--len] = base[n % base_len];
		n /= base_len;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*converted;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	converted = ft_putnbr_base(num, base_to);
	return (converted);
}
