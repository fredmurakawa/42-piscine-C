# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smaffeo- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 11:49:08 by smaffeo-          #+#    #+#              #
#    Updated: 2018/04/03 11:54:27 by smaffeo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = main.c open_read.c set_tables.c utils.c

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc	$(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
