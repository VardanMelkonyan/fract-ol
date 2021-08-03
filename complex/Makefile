# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmelkony <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/06 15:51:43 by vmelkony          #+#    #+#              #
#    Updated: 2021/07/09 20:01:52 by vmelkony         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_cadd.c ft_csub.c ft_cmult.c

NAME	= complex.a

OBJS	= $(SRC:.c=.o)

CC		= gcc

INCLUDE	= complex.h

FLAGS	= -c -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)
	ar r $(NAME) $(OBJS)

all:	$(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(INCLUDE).gch
	rm -f $(NAME)

re:		fclean all
