NAME = Hexdump
SRC = utils.c ft_hexdump.c
OBJS = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

