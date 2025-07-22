/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:03:00 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/23 00:23:26 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>
#include <fcntl.h>

int	print_file(char *filename)
{
	int		fd;
	ssize_t	nb_byte_read;
	char	buffer[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (ft_putstr_type("Cannot read file.\n", 2), 1);
	nb_byte_read = read(fd, buffer, BUF_SIZE);
	while (nb_byte_read > 0)
	{
		write(1, buffer, nb_byte_read);
		nb_byte_read = read(fd, buffer, BUF_SIZE);
	}
	if (nb_byte_read < 0)
	{
		ft_putstr_type("Cannot read file.\n", 2);
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}

int	main(int ac, char *av[])
{
	int	i;

	if (ac < 2)
		return (ft_putstr_type("File name missing.\n", 2), 1);
	i = 1;
	while (i < ac)
	{
		if (print_file(av[i]))
			return (1);
		i++;
	}
	return (0);
}
