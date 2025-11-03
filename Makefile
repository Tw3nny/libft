# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 02:34:14 by matisgutier       #+#    #+#              #
#    Updated: 2025/11/02 02:57:32 by matisgutier      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---VARIABLES---#

NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

#---REGLES---#

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

