/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 22:31:27 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/30 23:10:00 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

int	is_valid_op(char op)
{
	char	*valid_ops;
	int		i;

	valid_ops = "+-*/%";
	i = 0;
	while (i < 5)
	{
		if (op == valid_ops[i])
			return (1);
		i++;
	}
	return (0);
}

int	handle_div_mod_zero(char op, int b)
{
	if ((op == '/' || op == '%') && b == 0)
	{
		if (op == '/')
			write(1, "Stop : division by zero\n", 24);
		else
			write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

void	do_operation(int a, int b, char op)
{
	int		(*ops[5])(int, int);
	char	*symbols;
	int		i;

	symbols = "+-*/%";
	ops[0] = add;
	ops[1] = sub;
	ops[2] = mul;
	ops[3] = divide;
	ops[4] = mod;
	i = 0;
	while (i < 5)
	{
		if (op == symbols[i])
		{
			ft_putnbr(ops[i](a, b));
			write(1, "\n", 1);
			return ;
		}
		i++;
	}
	ft_putnbr(0);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	op;

	if (argc != 4)
		return (0);
	op = argv[2][0];
	if (!is_valid_op(op) || argv[2][1] != '\0')
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (handle_div_mod_zero(op, b))
		return (0);
	do_operation(a, b, op);
	return (0);
}
