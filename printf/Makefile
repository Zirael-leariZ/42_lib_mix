# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 08:18:27 by oishchen          #+#    #+#              #
#    Updated: 2025/04/05 17:25:57 by oishchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Werror -Wextra

SRC=ft_putchar_va.c ft_printf.c ft_putstr_va.c ft_putptr_va.c \
	ft_puthex_va.c ft_putunbr_va.c ft_putnbr_va.c
OBJS=$(SRC:.c=.o)
HEADERS=ft_printf.h

NAME = libftprintf.a

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

all : $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean ar