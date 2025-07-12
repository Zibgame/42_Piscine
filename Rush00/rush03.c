/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leauvray <leauvray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:23:11 by leauvray          #+#    #+#             */
/*   Updated: 2025/07/12 12:23:16 by leauvray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	corner(int column, int line, int *tab_size, char *tab)
{
	if (line == 0)
	{
		if (column == 0)
			ft_putchar(tab[0]);
		else
			if (column == tab_size[0] - 1)
				ft_putchar(tab[1]);
	}
	else
	{
		if (column == 0)
			ft_putchar(tab[2]);
		else
			if (column == tab_size[0] - 1)
				ft_putchar(tab[3]);
	}
}

void	square(int column, int line, int *tab_size, char *tab)
{
	if (column == 0 || column == tab_size[0] - 1)
	{
		if (line > 0 && line < tab_size[1] - 1)
			ft_putchar(tab[4]);
		else
			corner(column, line, tab_size, tab);
	}
	else
	{
		if (line > 0 && line < tab_size[1] - 1)
			ft_putchar('\x20');
		else
			ft_putchar(tab[5]);
	}
}

/*
** tab[0] = ''; //haut gauche
** tab[1] = ''; //haut droit
** tab[2] = ''; //bas gauche
** tab[3] = ''; //bas droit 
** tab[4] = ''; //espaces cotes 
** tab[5] = ''; //espaces haut bas
*/
void	rush(int x, int y)
{
	int		column;
	int		line;
	int		tab_size[2];
	char	tab[6];

	tab[0] = 'A';
	tab[1] = 'C';
	tab[2] = 'A';
	tab[3] = 'C';
	tab[4] = 'B';
	tab[5] = 'B';
	tab_size[0] = x;
	tab_size[1] = y;
	line = 0;
	while (line != y)
	{
		column = 0;
		while (column != x)
		{
			square(column, line, tab_size, tab);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
