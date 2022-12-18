# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 12:46:43 by dbizjano          #+#    #+#              #
#    Updated: 2022/12/16 14:49:40 by dbizjano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJ		= $(SRC:.c=.o)
CC		= gcc
RM		= rm -f
FLAG	= -Wall -Wextra -Werror -I.
NAME	= libft.a
COMP	= *.c

all:			$(NAME) so

$(NAME):		$(OBJ)
				ar rcs	$(NAME) $(OBJ)
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
compile:
	$(CC) $(FLAG) $(COMP) -o libft
clean: 
				$(RM)	$(OBJ)

fclean:			clean
				$(RM)	$(NAME)			
re: fclean all