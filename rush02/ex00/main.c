/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:12:26 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/26 17:49:40 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	main(int ac, char **av)
{
	if (!(ft_check_arg(ac, av)))
		{
			return 0;
		}
	if (ac == 3)
		rush02(av[1],av[2]);
	else if (ac == 2)
		rush02("dict.txt",av[1]);
	return (0);
}