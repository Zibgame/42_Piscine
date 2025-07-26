/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:06:39 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/26 18:10:50 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

long long ft_go_line(char *filename, long long line)
{
	long long	ln;
	long long	fd;
	ssize_t		bytes_read;
	char		buffer[BUF_SIZE];
	int			total_bytes;
	
	ln = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_type("Cannot read file.\n", 2);
		return (0);
	}
	total_bytes = 0;
	while (ln != line - 1)
	{
		bytes_read = read(fd, buffer, BUF_SIZE);
		while (buffer[0] != '\n')
			bytes_read = read(fd, buffer, BUF_SIZE);
		if (buffer[0] == '\n')
			ln++;
	}
	return (fd);
} 

long long ft_line_size(char *filename, long long line)
{
	long long	fd;
	ssize_t		bytes_read;
	char		buffer[BUF_SIZE];
	int			total_bytes;
	
	fd = ft_go_line(filename, line);
	total_bytes = 0;
	while (buffer[0] != '\n')
	{
		bytes_read = read(fd, buffer, BUF_SIZE);
		if (bytes_read == 0)
		{
			ft_putstr_type("\x1b[31m Error : \x1b[mEmpty line", 2);
			return (total_bytes);
		}
		if (buffer[0] != '\0' && buffer[0] != '\n')
			total_bytes += bytes_read;
	}
	close(fd);
	return (total_bytes);
}


char	*ft_line(char *filename, long long ln)
{
	long long	i;
	long long	fd;
	char 		*line;
	ssize_t		bytes_read;
	char		buffer[BUF_SIZE];
	
	i = 0;
	line = malloc(ft_line_size(filename, ln) * sizeof(char));
	fd = ft_go_line(filename, ln);
	bytes_read = read(fd,buffer,BUF_SIZE);
	if ((ft_line_size(filename, ln) == 0))
	{
		ft_putstr_type("\x1b[31m Error : \x1b[mEmpty line", 2);
		return (line);
	}
	line[i] = buffer[0];
	i++;
	while (buffer[0] != '\n')
	{
		bytes_read = read(fd,buffer,BUF_SIZE);
		line[i] = buffer[0];
		i++;
	}
	line[i] = '\0';
	return (line);
}

int ft_find_in_line(char *filename, long long ln, char* to_find)
{
	char 		*line;
	
	line = ft_line(filename, ln);
	if (ft_strstr(line, to_find) == 0)
	{
		return (0);
	}
	return (1);
}

void ft_print_line(char *filename, long long ln)
{
	char *line;
	long long i;	
	line = ft_line(filename, ln);
	i = ft_strlen(line) - 1;
	while (line[i] != ':')
		i--;
	while (!(line[i] >= 33 && line[i] <= 126 )|| line[i] == ':' )
		i++;
	while (line[i])
	{
		write(1 ,&line[i] ,1);
		i++;
	}
	return ;
}

long long ft_print_nb_byfile(char *filename, char *number)
{
	long long	i;

	i = 0;
	while(!(ft_find_in_line(filename, i, number)))
	{
		write(1,"a",1);
		i++;
	}
	if (!(ft_find_in_line(filename, i, number)))
		return (0);
	ft_print_line(filename, i);
	return (1);
}

char *rush02(char *filename, char *number)
{
	//char *alphanum;
	//alphanum = malloc(sizeof(char) * );

	int	i;
	i = 0;
	while (number[i])
	{
		i++;
	}
	//ft_find_in_line("dict.txt", 2, "0");
	// ft_line("dict.txt", 2);
	//print_line(filename, 33);
	ft_print_nb_byfile(filename, number);
	return	(number);
}
