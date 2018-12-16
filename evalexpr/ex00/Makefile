# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 17:31:45 by fbueno-m          #+#    #+#              #
#    Updated: 2018/04/01 17:31:46 by fbueno-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRCS = main.c operations.c push_pop.c utils.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
