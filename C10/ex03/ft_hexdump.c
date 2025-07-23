/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 23:27:21 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/23 23:39:51 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_print_offset(char *filename)
{
	int i;
	int fd;
	char buffer[BUF_SIZE];
	ssize_t nb_byte_read;

	i = 0;
	nb_byte_read = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_type("Cannot read file.\n", 2);
		return ;
	}
	nb_byte_read = read(fd,buffer,BUF_SIZE);
	while()
	{
		nb_byte_read = read(fd,buffer,BUF_SIZE);
		i += nb_byte_read
	}
}

int main(int ac, char *av[])
{
	int	i;
	int	nb;

	if (ac < 2)
	{
		ft_putstr_type("File name missing.\n", 2);
		return (1);
	}
	ft_print_offset();
	return (0);
}
