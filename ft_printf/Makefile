NAME	= libftprintf.a

LIB_SRC =	libft/ft_atoi.c libft/ft_bzero.c libft/ft_check_end_spaces.c libft/ft_check_start_spaces.c libft/ft_isalnum.c \
			libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c libft/ft_itoa.c libft/ft_lstadd.c libft/ft_lstdel.c \
			libft/ft_lstdelone.c libft/ft_lstiter.c libft/ft_lstmap.c libft/ft_lstnew.c libft/ft_memalloc.c libft/ft_memccpy.c libft/ft_memchr.c \
			libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memdel.c libft/ft_memmove.c libft/ft_memset.c libft/ft_num_of_digits.c libft/ft_putchar.c \
			libft/ft_putchar_fd.c libft/ft_putendl.c libft/ft_putendl_fd.c libft/ft_putnbr.c libft/ft_putnbr_fd.c libft/ft_putstr.c libft/ft_putstr_fd.c \
			libft/ft_strcat.c libft/ft_strchr.c libft/ft_strclr.c libft/ft_strcmp.c libft/ft_strcpy.c libft/ft_strdel.c libft/ft_strdup.c libft/ft_strequ.c libft/ft_striter.c \
			libft/ft_striteri.c libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlen.c libft/ft_strmap.c libft/ft_strmapi.c libft/ft_strncat.c libft/ft_strncmp.c \
			libft/ft_strncpy.c libft/ft_strnequ.c libft/ft_strnew.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strsplit.c libft/ft_strstr.c \
			libft/ft_strsub.c libft/ft_strtrim.c libft/ft_tolower.c libft/ft_toupper.c libft/ft_str_is_lowercase.c libft/ft_str_is_uppercase.c \
			libft/ft_str_is_printable.c libft/ft_str_is_numeric.c libft/ft_strnlen.c libft/ft_isspace.c libft/ft_convert_dec_base.c \

LIB_OBJ =	ft_atoi.o ft_bzero.o ft_check_end_spaces.o ft_check_start_spaces.o ft_isalnum.o \
			ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_lstadd.o ft_lstdel.o \
			ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o ft_memalloc.o ft_memccpy.o ft_memchr.o \
			ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o ft_num_of_digits.o ft_putchar.o \
			ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o \
			ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o \
			ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o ft_strncmp.o \
			ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o ft_strstr.o \
			ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o ft_str_is_lowercase.o ft_str_is_uppercase.o \
			ft_str_is_printable.o ft_str_is_numeric.o ft_strnlen.o ft_isspace.o ft_convert_dec_base.o \

PRINTF_SRC =	srcs/ft_printf.c srcs/parse_flags.c srcs/flag_int.c \
				srcs/flag_char.c srcs/flag_align.c srcs/flag_precision.c

PRINTF_OBJ =	ft_printf.o parse_flags.o flag_int.o \
				flag_char.o flag_align.o flag_precision.o

SRC		= $(LIB_SRC) $(PRINTF_SRC)

OBJ		= $(LIB_OBJ) $(PRINTF_OBJ)
FLAGS	= -Wall -Wextra -Werror
HEADER	= includes/

%.o: libft/%.c
	gcc $(FLAGS) -c -I $(HEADER) -I libft/ $< -o $@
	ar rc $(NAME) $@

%.o: srcs/%.c includes/ft_printf.h
	gcc $(FLAGS) -c -I $(HEADER) -I libft/ $< -o $@
	ar rc $(NAME) $@

all: $(NAME)

$(NAME): $(OBJ) includes/ft_printf.h
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all