/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:38:31 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/16 22:38:33 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valide(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

int	ft_char_to_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_skip_spaces_and_sign(char *str, int *i)
{
	int	signe;

	signe = 1;
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' ')
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			signe = -signe;
		(*i)++;
	}
	return (signe);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	res;
	int	val;
	int	base_len;

	if (!is_valide(base))
		return (0);
	i = 0;
	res = 0;
	signe = ft_skip_spaces_and_sign(str, &i);
	base_len = 0;
	while (base[base_len])
		base_len++;
	while (str[i])
	{
		val = ft_char_to_value(str[i], base);
		if (val == -1)
			break ;
		res = res * base_len + val;
		i++;
	}
	return (res * signe);
}
