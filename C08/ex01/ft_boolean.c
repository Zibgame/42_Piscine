/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:13:54 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/21 14:20:15 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return (EVEN(nbr) ? TRUE : FALSE);
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc -1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
