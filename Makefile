# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 11:37:46 by oishchen          #+#    #+#              #
#    Updated: 2025/04/16 17:30:59 by oishchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=mixlibft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

#DIRs
GNL_DIR=get_nex_line
PRINTF_DIR=printf
LIBFT_DIR=libft

#DIRs Linked With src
GNL_DIR_SRC = $(GNL_DIR)/srcs
GNL_DIR_OBJ = $(GNL_DIR)/objs
GNL_DIR_INC = $(GNL_DIR)/includes

PRINTF_DIR_SRC = $(PRINTF_DIR)/srcs
PRINTF_DIR_OBJ = $(PRINTF_DIR)/objs
PRINTF_DIR_INC = $(PRINTF_DIR)/includes

LIBFT_DIR_SRC = $(LIBFT_DIR)/srcs
LIBFT_DIR_OBJ = $(LIBFT_DIR)/objs
LIBFT_DIR_INC = $(LIBFT_DIR)/includes

#Headers
INCLUDE = -I$(LIBFT_DIR_INC) -I$(PRINTF_DIR_INC) -I$(GNL_DIR_INC)

#SRCs
PRINTF_SRC_FILES=ft_putchar_va.c ft_printf.c ft_putstr_va.c ft_putptr_va.c \
	ft_puthex_va.c ft_putunbr_va.c ft_putnbr_va.c
PRINTF_SRCS=$(addprefix $(PRINTF_DIR_SRC)/, $(PRINTF_SRC_FILES))

GNL_SRC_FILES=get_next_line.c get_next_line_utils.c
GNL_SRCS=$(addprefix $(GNL_DIR_SRC)/, $(GNL_SRC_FILES))

LIBFT_SRC_FILES =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memset.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
	ft_memmove.c ft_memcpy.c ft_strlcpy.c ft_atoi.c ft_strlcat.c \
	ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_split.c \
	ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strnstr.c
LIBFT_SRCS = $(addprefix $(LIBFT_DIR_SRC)/, $(LIBFT_SRC_FILES))

#OBJs
PRINTF_OBJS=$(PRINTF_SRCS:$(PRINTF_DIR_SRC)/%.c=$(PRINTF_DIR_OBJ)/%.o)
GNL_OBJS=$(GNL_SRCS:$(GNL_DIR_SRC)/%.c=$(GNL_DIR_OBJ)/%.o)
LIBFT_OBJS=$(LIBFT_SRCS:$(LIBFT_DIR_SRC)/.%c=$(LIBFT_DIR_OBJ)/%.o)

OBJS=$(PRINTF_OBJS) $(GNL_OBJS) $(LIBFT_OBJS)

all:$(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(PRINTF_DIR_OBJ):
	@mkdir -p $(PRINTF_DIR_OBJ)

$(GNL_DIR_OBJ):
	@mkdir -p $(GNL_DIR_OBJ)

$(LIBFT_DIR):
	@mkdir -p $(LIBFT_DIR)

$(PRINTF_DIR_OBJ)%/.o: $(PRINTF_DIR_SRC)/%.c | $(PRINTF_DIR_OBJ)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(GNL_DIR_OBJ)/%.o: $(GNL_DIR_SRC)/%.c | $(GNL_DIR_OBJ)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(LIBFT_DIR_OBJ)/%.o: $(LIBFT_DIR_SRC)/%.c | $(LIBFT_DIR_OBJ)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@(RM) $(OBJS)

fclean: clean
	@(RM) $(NAME)

re: fclean all
