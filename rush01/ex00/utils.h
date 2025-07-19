/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibgame <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:00:00 by zibgame           #+#    #+#             */
/*   Updated: 2025/07/19 19:51:35 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>

int		parse_input(char *str, int *views);
void	print_grid(int grid[4][4]);
int		solve(int grid[4][4], int *views, int pos);
int		check_views(int grid[4][4], int *views);
int		check_line_left(int *line, int view);
int		check_line_right(int *line, int view);
int		is_valid(int grid[4][4], int row, int col, int num);

#endif
