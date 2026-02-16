# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/12 10:38:47 by psmolich          #+#    #+#              #
#    Updated: 2026/02/16 11:59:06 by psmolich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME := minishell

LIBFT_DIR := libft
LIBFT := $(LIBFT_DIR)/libft.a
INC_DIR := inc

SRCS := $(wildcard *.c) \
		$(wildcard tokenize_line/*.c) \
		$(wildcard parsing_utils/*.c) \
		$(wildcard create_pipeline/*.c) \

CC := cc
CFLAGS := -Wall -Wextra -Werror -I$(LIBFT_DIR) -I$(INC_DIR)

all: $(NAME)

$(NAME): $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) $(LIBFT)

$(LIBFT):
	make -C libft/

clean:
	make clean -C libft/

fclean: clean
	rm -f $(NAME)
	make fclean -C libft/

re: fclean all
