NAME = fillit
FILLIT_SRC = map.c read.c solver.c tetramino.c validation.c fillit.c
FILLIT_OBJ = map.o read.o solver.o tetramino.o validation.o fillit.o
FILLIT_INC = fillit.h
LIBFT = libft/
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	gcc -c $(FLAGS) $(FILLIT_SRC) -I $(FILLIT_INC) libft/libft.h
	gcc $(FLAGS) $(FILLIT_OBJ) -L. libft/libft.a -o $(NAME)

clean:
	/bin/rm -f $(FILLIT_OBJ)
	make -C $(LIBFT) clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LIBFT) fclean

re: clean fclean all
