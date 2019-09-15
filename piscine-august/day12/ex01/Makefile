NAME = ft_cat 
SRCS = srcs/*.c
INCLUDE = includes/

all:
	@gcc $(SRCS) -I $(INCLUDE) -o $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all