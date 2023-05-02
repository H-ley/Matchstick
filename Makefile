##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	$(shell echo src/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all:	$(NAME)

$(NAME):	$(OBJ)
		@gcc -o $(NAME) $(OBJ) -lm -g3

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	find -name "*~" -delete
	find -name "*#" -delete
	find -name "*.o" -delete

re:	fclean all
