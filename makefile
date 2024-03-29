# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: debizhan <debizhan@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 12:46:43 by dbizjano          #+#    #+#              #
#    Updated: 2023/02/26 19:43:15 by debizhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=		ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c\
				ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
				ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c\
				ft_putnbr_fd.c ft_putchar_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_split.c ft_striteri.c\
		
BONUS	=		ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstsize.c ft_lstnew.c ft_lstdelone.c ft_lstclear.c\
				ft_lstiter.c ft_lstmap.c
OBJ		= 		$(SRC:.c=.o)
BOBJ	=		$(BONUS:.c=.o)
CC		= 		gcc
RM		= 		rm -f
FLAG	= 		-Wall -Wextra -Werror -I.
NAME	= 		libft.a
COMP	= 		*.c

all:			$(NAME)

$(NAME):		$(OBJ)
				ar rcs	$(NAME) $(OBJ)
bonus: 			$(OBJ) $(BOBJ)
				ar rcs	$(NAME) $(OBJ) $(BOBJ)
clean: 
				$(RM)	$(OBJ)  $(BOBJ)

fclean:			clean
				$(RM)	$(NAME)			
re: 			fclean all