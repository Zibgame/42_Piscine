/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:07:04 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/26 17:45:13 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "utils.h"


long long	ft_strlen(char *str)
{
	long long	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (-1);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_nb_len(long nb)
{
	int	res;
	
	res = 0;
	while (nb >= 10)
	{	
		nb = nb / 10;
		res++;
	}
	return (res);
}

void	ft_putstr_type(char *str, int type)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(type, str, i);
	write(1, "\n", 1);
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long nb;

	nb = nbr;
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int     ft_strstr(char *str, char *to_find)
{
    int     i;
    int     j;

    j = 0;
    if (to_find[j] == '\0')
            return (0);
    i = 0;
    while (str[i])
    {
        while (str[i + j] && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0' && (str[i + j] < '0' || str[i + j] > '9'))
            return (1);
        i++;
        j = 0;
    }
    return (0);
}

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

