# *- MakeFile -*-
# Compilation variables
CC=cc
CFLAGS=-Wall -Wextra -Werror

#src and objects files
SRCS=ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memset.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
	ft_memmove.c ft_memcpy.c ft_strlcpy.c ft_atoi.c ft_strlcat.c \
	ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_split.c \
	ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strnstr.c\


OBJS=$(SRCS:.c=.o)

BONUS_SRC=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS=$(BONUS_SRC:.c=.o)
#headers and BINARY
NAME=libft.a
HEADERS=libft.h

# Define the compilation of the libft.a
$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
# ar rcs libft.a *.o

# rule how to compile each .o file
%.o:%.c
	$(CC) $(CFLAGS) -I $(HEADERS) -c $< -o $@
#cc -Wall -Wextra -Werror -I libft.h -c ft_isalnum.c -o ft_isalnum.o

# Commands start here
all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(BONUS_OBJS) $(OBJS)
	ar rcs $(NAME) $(BONUS_OBJS) $(OBJS)

b_clean:
	rm -f $(OBJS) $(BONUS_OBJS)

b_fclean: b_clean
	rm -rf $(NAME)

.PHONY: all clean fclean bonus b_clean b_fclean re