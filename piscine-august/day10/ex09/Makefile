# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sapril <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/13 20:01:28 by sapril            #+#    #+#              #
#    Updated: 2019/08/13 20:01:30 by sapril           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = includes/
SRCS = srcs/*.c
MUL = -Wall -Wextra -Werror
NAME = do-op

.PHONY: all compile clean re
all: compile

compile:
	gcc -I $(HEADER) $(MUL) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all
