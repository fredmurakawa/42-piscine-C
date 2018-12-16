# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 09:35:47 by fbueno-m          #+#    #+#              #
#    Updated: 2018/03/26 10:04:42 by fbueno-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = ./main.c ./ft_operations.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	@/bin/rm -f $(NAME)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
