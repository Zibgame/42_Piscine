/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:34:21 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/19 19:34:24 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	main(int argc, char **argv)
{
	int		views[16];
	int		grid[4][4];

	if (argc != 2 || !parse_input(argv[1], views))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!solve(grid, views, 0))
		write(1, "Error\n", 6);
	else
		print_grid(grid);
	return (0);
}

