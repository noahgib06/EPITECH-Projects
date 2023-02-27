##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC		=   main_menu.c	\


NAME	=	my_hunter

all:
	make -C lib/my/ all
	gcc -o $(NAME) $(SRC) -L./lib/my/ -lmy -I./include/ \
	-lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

clean:
	make -C lib/my/ clean
	rm -rf *.o
	rm -rf *.c~

fclean:	clean
	make -C lib/my/ fclean
	rm -rf $(NAME)
	rm -rf lib/libmy.a

re:	fclean all
	make -C lib/my/ re
