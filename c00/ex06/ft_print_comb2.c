/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:21:12 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/09 15:44:44 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	spliter(char c, int b)
{
	if (!b)
		ft_putchar(c % 10 + '0');
	else
		ft_putchar(c / 10 + '0');
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;	

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			spliter(a, 1);
			spliter(a, 0);
			write(1, " ", 1);
			spliter(b, 1);
			spliter(b, 0);
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
