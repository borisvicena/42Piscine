# Compiler options
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCS_DIR = srcs/
HEADER_DIR = includes/

# Files
SRCS = $(SRCS_DIR)ft_putchar.c $(SRCS_DIR)ft_swap.c $(SRCS_DIR)ft_putstr.c \
		$(SRCS_DIR)ft_strcmp.c $(SRCS_DIR)ft_strlen.c
HEADER = $(HEADER_DIR)ft.h
OBJS = $(SRCS:.c=.o)
LIB = libft.a

# Rules
all: $(LIB)

$(LIB): $(OBJS)
	ar rc libft.a $(OBJS)

$(OBJS): $(SRCS) $(HEADER)
	$(CC) $(CFLAGS) -I$(HEADER_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
