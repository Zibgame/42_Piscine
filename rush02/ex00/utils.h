/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:07:16 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/26 17:49:04 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

 #define AC_BLACK "\x1b[30m"
# define AC_RED "\x1b[31m"
# define AC_GREEN "\x1b[32m"
# define AC_YELLOW "\x1b[33m"
# define AC_BLUE "\x1b[34m"
# define AC_MAGENTA "\x1b[35m"
# define AC_CYAN "\x1b[36m"
# define AC_WHITE "\x1b[37m"
# define AC_NORMAL "\x1b[m"

# define BUF_SIZE 1
 
int			ft_is_numeric(char *str);
int 		ft_check_arg(int argc, char **argv);
long long	ft_strlen(char *str);
int     	ft_strcmp(char *s1, char *s2);
int     	ft_atoi(char *str);
void    	ft_putstr(char *str);
void		ft_putnbr(int nbr);
void		ft_putchar(char c);
void		ft_putstr_type(char *str, int type);
int			ft_strstr(char *str, char *to_find);
char 		*rush02(char *filename, char *number);

#endif
