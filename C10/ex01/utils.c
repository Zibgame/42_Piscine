/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:16:09 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/22 23:24:16 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>

void	ft_putstr_type(char *str, int type)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(type, str, i);
}
