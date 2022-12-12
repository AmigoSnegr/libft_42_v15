CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= *.c
OBJECTS	= $(NAME:.c=.o)

all:*.o
	$(CC) $(CFLAGS) $(NAME) -o libft

clean:
	rm -rf *.o