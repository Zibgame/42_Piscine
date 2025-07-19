/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibgame <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:00:00 by zibgame           #+#    #+#             */
/*   Updated: 2025/07/19 19:51:12 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	parse_input(char *str, int *views)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (j >= 16)
				return (0);
			views[j++] = str[i] - '0';
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	return (j == 16);
}
