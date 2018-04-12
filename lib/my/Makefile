##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	my_get_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strcpy.c	\
		my_strlen.c

CFLAGS = 	-W -Werror -Wall -Wextra

NAME =		libmy.a

OBJ =		$(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	 rm -f $(NAME)

re: fclean all
