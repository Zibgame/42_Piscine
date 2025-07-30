# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/30 23:10:00 by zcadinot          #+#    #+#              #
#    Updated: 2025/07/30 23:10:00 by zcadinot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRC		= do-op.c add.c sub.c mul.c divide.c mod.c ft_atoi.c ft_putnbr.c ft_putchar.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c do_op.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
