# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/19 19:37:08 by zcadinot          #+#    #+#              #
#    Updated: 2025/07/19 19:37:15 by zcadinot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush01

SRC = main.c parser.c rush01.c solver.c utils.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	cc $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
