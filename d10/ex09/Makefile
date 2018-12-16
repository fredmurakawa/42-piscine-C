# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/27 14:38:41 by fbueno-m          #+#    #+#              #
#    Updated: 2018/03/27 14:38:42 by fbueno-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRCS = ./ft_operations.c ./ft_put.c ./main.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	@/bin/rm -f $(NAME)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
