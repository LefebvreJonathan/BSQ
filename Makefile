##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile of the my_ls in order to generate the binary.
##

SRC_DIR =	./SRC

SRC	=	$(SRC_DIR)/main.c		\
		$(SRC_DIR)/arraylen.c		\
                $(SRC_DIR)/BSQ.c		\
                $(SRC_DIR)/check_square.c	\
                $(SRC_DIR)/get_lenght.c		\
                $(SRC_DIR)/getsize.c		\
                $(SRC_DIR)/prepare_BSQ.c	\
                $(SRC_DIR)/replaceSquare.c	\
                $(SRC_DIR)/setArray.c		\
		$(SRC_DIR)/valid_map.c

CFLAGS	=	-W -Werror -Wall -Wextra

NAME	=	bsq

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -Llib/my -lmy

clean:
	rm -f $(OBJ)
	make clean -C lib/my

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my

re:	fclean all
	make re -C lib/my

