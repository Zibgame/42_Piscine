/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:14:28 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/23 12:11:03 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# define BUF_SIZE 1

# include <unistd.h>
# include <fcntl.h>

void	ft_putstr_type(char *str, int type);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int	ft_atoi(char *str);

#endif
