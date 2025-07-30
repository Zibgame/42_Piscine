# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 21:15:53 by zcadinot          #+#    #+#              #
#    Updated: 2025/07/22 23:06:28 by zcadinot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variabless
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ = $(SRC:.c=.o)

NAME = libft.a

#  par défaut
all: $(NAME)

# makeing de la lib
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

# Compilation des .c en .o
srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# cleanig complet
fclean: clean
	rm -f $(NAME)

# rbuild complet
re: fclean all

.PHONY: all clean fclean re
