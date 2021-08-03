# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmelkony <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 19:53:09 by vmelkony          #+#    #+#              #
#    Updated: 2021/07/20 13:52:51 by vmelkony         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPLEX			= ./complex/complex.a

NAME			= main

SRC				= main.c

CC				= gcc

FLAGS			= -Wall -Wextra -Werror

MLXFLAGS		= -Lmlx -lmlx -framework OpenGL -framework AppKit

INCLUDES		= -Imlx

OBJS			= $(SRC:.c=.o)

.c.o:
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./complex
	$(MAKE) -C ./mlx
	$(CC) $(MLXFLAGS) -o $(NAME) $(COMPLEX) $(OBJS)

all: $(NAME)

clean:
	$(MAKE) clean -C ./complex
	rm -rf $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./complex
	rm -rf $(NAME)

re: fclean all

norm:
	norminette .

.PHONY: all .c.o clean fclean re norm
