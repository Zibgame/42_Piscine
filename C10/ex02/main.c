/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:03:00 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/23 15:48:28 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>
#include <fcntl.h>

int ft_count_bit_file(char *filename)
{
	int		fd;
	ssize_t	nb_byte_read;
	char	buffer[BUF_SIZE];
	int	byte_total;

	byte_total = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (ft_putstr_type("Cannot read file.\n", 2), 1);
	nb_byte_read = read(fd, buffer, BUF_SIZE);
	byte_total += nb_byte_read;
	while (nb_byte_read > 0)
	{
		nb_byte_read = read(fd, buffer, BUF_SIZE);
		byte_total += nb_byte_read;
	}
	if (nb_byte_read < 0)
	{
		ft_putstr_type("Cannot read file.\n", 2);
		close(fd);
		return (1);
	}
	close(fd);
	return (byte_total);
}

int tail(char *filename, int nb)
{
	int fd;
	int total_byte;
	int i;
	char buffer[BUF_SIZE];
	ssize_t nb_byte_read;
	
	i = 0;
	(void)nb;
	total_byte = ft_count_bit_file(filename);
	fd = open(filename,O_RDONLY);
	if (fd < 0)
		return (ft_putstr_type("Cannot read file.\n", 2), 1);
	while (i < (total_byte	- nb))
	{
		read(fd,buffer,BUF_SIZE);
		i++;
	}
	while(i < total_byte)
	{
		nb_byte_read = read(fd,buffer,BUF_SIZE);
		write(1,buffer,nb_byte_read);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[])
{
	int	i;
	
	if (ac < 2)
		return (ft_putstr_type("File name missing.\n", 2), 1);
	i = 1;
	while (i < ac - 1)
	{
		if(tail(av[i],ft_atoi(av[ac - 1])))
			return (0);
		i++;
	}
	return (0);
}
