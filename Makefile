# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 13:38:51 by yabenman          #+#    #+#              #
#    Updated: 2025/01/09 13:38:53 by yabenman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC= cc

CFLAGS= -Wall -Wextra -Werror

HDR = push_swap.h

SRC =  ft_split.c instraction.c instraction1.c instraction2.c instraction3.c low_sort_utils.c parsing.c parsing_utils.c push_swap.c big_sort.c sort_utils.c sort.c utils.c utils1.c utils2.c

OBJ = $(SRC:.c=.o)

NAME = push_swap

all: push_swap

$(NAME) : $(OBJ)
	$(CC)  $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf  $(OBJ) $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all