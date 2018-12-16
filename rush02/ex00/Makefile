# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shuang <rose1264@gmail.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/31 14:11:14 by shuang            #+#    #+#              #
#    Updated: 2018/03/31 20:10:15 by shuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =	gcc

FLAG =	-Wall -Wextra -Werror -o 

NAME =	rush-2

SRC =	rush2.c	\
	rush00.c	\
	rush01.c	\
	rush02.c	\
	rush03.c	\
	rush04.c	\
	libft.a

OBJS =	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) $(NAME) $(SRC)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: clean all
