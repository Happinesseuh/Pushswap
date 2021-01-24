##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for pushswap
##

SRC	=	./main.c\
		./sources/list_functions.c\
		./sources/my_putstr.c\
		./sources/my_getnbr.c\
		./sources/my_put_nbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all:	$(OBJ)
	gcc $(OBJ) -o $(NAME) -g3

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all tests_run clean fclean re