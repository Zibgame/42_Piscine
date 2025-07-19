/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibgame <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:00:00 by zibgame           #+#    #+#             */
/*   Updated: 2025/07/19 19:41:01 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	is_valid(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_line_left(int *line, int view)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible++;
		}
		i++;
	}
	return (visible == view);
}

int	check_line_right(int *line, int view)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 3;
	while (i >= 0)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible++;
		}
		i--;
	}
	return (visible == view);
}

int	check_views(int grid[4][4], int *views)
{
	int	row[4];
	int	col[4];
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			row[j] = grid[i][j];
			col[j] = grid[j][i];
		}
		if (!check_line_left(row, views[8 + i])
			|| !check_line_right(row, views[12 + i])
			|| !check_line_left(col, views[i])
			|| !check_line_right(col, views[4 + i]))
			return (0);
	}
	return (1);
}


