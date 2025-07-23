/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:03:00 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/23 16:21:31 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>
#include <fcntl.h>

int	ft_count_bytes_file(char *filename)
{
	int		fd;
	ssize_t	bytes_read;
	char	buffer[BUF_SIZE];
	int		total_bytes;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_type("Cannot read file.\n", 2);
		return (-1);
	}
	total_bytes = 0;
	bytes_read = read(fd, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		total_bytes += bytes_read;
		bytes_read = read(fd, buffer, BUF_SIZE);
	}
	if (bytes_read < 0)
	{
		ft_putstr_type("Cannot read file.\n", 2);
		close(fd);
		return (-1);
	}
	close(fd);
	return (total_bytes);
}

int	tail(char *filename, int nb)
{
	int		fd;
	int		total_bytes;
	int		skip_bytes;
	int		bytes_read;
	char	buffer[BUF_SIZE];

	if (nb < 0)
		nb = -nb;
	total_bytes = ft_count_bytes_file(filename);
	if (total_bytes < 0)
		return (1);
	skip_bytes = total_bytes - nb;
	if (skip_bytes < 0)
		skip_bytes = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_type("Cannot read file.\n", 2);
		return (1);
	}
	while (skip_bytes > 0)
	{
		bytes_read = read(fd, buffer, (skip_bytes > BUF_SIZE) ? BUF_SIZE : skip_bytes);
		if (bytes_read <= 0)
			break ;
		skip_bytes -= bytes_read;
	}
	while ((bytes_read = read(fd, buffer, BUF_SIZE)) > 0)
		write(1, buffer, bytes_read);
	close(fd);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	nb;

	if (argc < 2)
	{
		ft_putstr_type("File name missing.\n", 2);
		return (1);
	}
	nb = ft_atoi(argv[argc - 1]);
	i = 1;
	while (i < argc - 1)
	{
		if (tail(argv[i], nb))
			return (1);
		i++;
	}
	return (0);
}
