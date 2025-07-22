/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:10:17 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/22 23:51:06 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>
#include <fcntl.h>

int	handle_errors(int ac)
{
	if (ac < 2)
	{
		ft_putstr_type("File name missing.\n", 2);
		return (1);
	}
	if (ac > 2)
	{
		ft_putstr_type("Too many arguments.\n", 2);
		return (1);
	}
	return (0);
}

int	main(int ac, char *av[])
{
	int		fd;
	char	buffer[BUF_SIZE];
	ssize_t	nb_byte_read;

	if (handle_errors(ac))
		return (1);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_type("Cannot read file.\n", 2);
		return (1);
	}
	nb_byte_read = read(fd, buffer, BUF_SIZE);
	while (nb_byte_read > 0)
	{
		write(1, buffer, nb_byte_read);
		nb_byte_read = read(fd, buffer, BUF_SIZE);
	}
	if (nb_byte_read < 0)
		ft_putstr_type("Cannot read file.\n", 2);
	close(fd);
	return (nb_byte_read < 0);
}
