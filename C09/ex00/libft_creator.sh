# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 21:01:30 by zcadinot          #+#    #+#              #
#    Updated: 2025/07/22 21:09:24 by zcadinot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

# Compilation des fichiers source en objets .o
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Creation de la bibliothech statique libft.a
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Indexation de la bibliothece
ranlib libft.a

#  En gros la je nettoie les .o
rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
