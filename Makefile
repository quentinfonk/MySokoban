##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

CC	?=	gcc

RM	?=	rm -f

CPPFLAGS=	-I./include

SRC	=	src/test.c	\
		src/my_strcpy.c	\
		src/comptestr.c	\
		src/restompte.c	\
		src/move.c	\
		src/map_start.c	\
		src/my_strlen.c	\
		src/main.c	\
		src/my_putstr.c	\
		src/my_putchar.c\

NAME	=	my_sokoban

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) -lncurses

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
