# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dalara-s <dalara-s@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 14:39:12 by dalara-s          #+#    #+#              #
#    Updated: 2024/12/17 16:02:58 by dalara-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC	=	error.c \
		init_stack.c \
		prep_sort.c \
		push.c \
		push_swap.c \
		rev_rotate.c \
		rotate.c \
		set_b.c \
		set_values.c \
		sorting.c \
		stack_utils.c \
		swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CC	=	gcc

CFLAGS	=	-W -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ) Makefile push_swap.h
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean	all
