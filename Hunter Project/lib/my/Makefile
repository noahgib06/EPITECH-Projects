##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC		=	$(wildcard *.c)

OBJ 	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(OBJ)
	ar -rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include/
	cp struct.h ../../include/

clean:
	rm -rf *.o
	rm -rf *.c~

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
