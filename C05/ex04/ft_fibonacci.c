/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 23:42:00 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/16 00:04:42 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	temp;
	int	i;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	a = 0;
	b = 1;
	i = 1;
	while (i < index)
	{
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	return (b);
}

