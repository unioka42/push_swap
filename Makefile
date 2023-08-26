# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 12:57:14 by kokada            #+#    #+#              #
#    Updated: 2023/08/26 15:07:50 by kokada           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

LIBFT		=	./libft/
LIBFT_A		=	./libft/libft.a

CC			=	gcc
INCLUDE 	=	./includes
CFLAGS		=	-g -I$(INCLUDE) #-Wall -Wextra -Werror 
SRCS		=	$(wildcard srcs/*.c)

OBJS		=	$(SRCS:%.c=%.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBFT_A)
				$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT) -lft -o $(NAME)

$(LIBFT_A):
				$(MAKE) -C $(LIBFT)

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

localclean:
				$(RM) $(OBJS)

clean:			localclean
				$(MAKE) clean -C $(LIBFT)

fclean:			localclean
				$(MAKE) fclean -C $(LIBFT)
				$(RM) $(NAME)

re:				fclean all

.PHONY: all clean fclean re localclean test
