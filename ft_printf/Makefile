NAME = ft_printf
PRINTF_SRC = 
PRINTF_OBJ = 
PRINTF_INC = ft_printf.h
LIBFT = libft/
FLAGS = -Wall -Wextra -Werror
LIB_HEADER = ../libft/libft.h
OBJ = $(subst .c,.o,$(PRINTF_SRC))

.PHONY: all clean fclean re

%.o: %.c $(LIB_HEADER)
	gcc -Wall -Wextra -Werror -I $(LIB_HEADER) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	gcc $(FLAGS) $(PRINTF_OBJ) -L. libft/libft.a -o $(NAME)

clean:
	/bin/rm -f $(PRINTF_OBJ)
	make -C $(LIBFT) clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LIBFT) fclean

re: clean fclean all
