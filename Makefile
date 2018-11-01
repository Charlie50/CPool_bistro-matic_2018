##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makes files
##

SRC=	src/main.c	\
	src/str.c

NAME=	calc

all:	$(NAME)
$(NAME):
	gcc -Wall -W -o $(NAME) $(SRC)
clean:
	rm -f src/*~
	rm -f include/*~
	rm -f *~
fclean:	clean
	rm -f $(NAME)
re:	clean fclean all
