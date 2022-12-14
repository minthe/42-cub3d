# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 14:46:38 by vfuhlenb          #+#    #+#              #
#    Updated: 2022/12/01 15:01:29 by vfuhlenb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Cub3D

CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

RM = rm -f
AF = ar rcs

SRCS = \
cub3d.c\

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	make -C inc/libft
	make bonus -C inc/libft
	make -C inc/libft/ft_printf
	$(CC) $(OBJS) $(CFLAGS) $(LIBFT) $(FT_PRINTF) -o $(NAME)

LIBFT_DIR = inc/libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = inc/libft/ft_printf
FT_PRINTF = $(PRINTF_DIR)/libftprintf.a

all: $(NAME)

clean:
	$(RM) $(OBJS)
	make clean -C inc/libft
	make clean -C inc/libft/ft_printf

fclean: clean
	$(RM) $(NAME)
	make fclean -C inc/libft
	make fclean -C inc/libft/ft_printf

re: fclean all

norminette:
	norminette $(SRCS)