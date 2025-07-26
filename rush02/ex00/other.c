/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:32:24 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/26 17:13:50 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_check_arg(int argc, char *argv[])
{
	int		fd;
	int		i = 0;
	char	*str;

	if (argc < 2 || argc > 3)
		return (ft_putstr_type("Error1", 2), 0);
	if (argc == 2)
		str = argv[1];
	else
		str = argv[2];
	while (str[i])
		if (!ft_is_numeric(&str[i++]))
			return (ft_putstr_type("Error : to few argument", 2), 0); 
	if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (ft_putstr_type("Cannot read 'file' in argument.\n", 2), 0);
		close(fd);
	}
	return (1);
}
