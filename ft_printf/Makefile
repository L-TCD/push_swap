SRC	= $(addprefix $(SRC_DIR)/, \
ft_printf.c \
char_format.c \
string_format.c \
percent_format.c \
unsigned_format.c \
digit_format.c \
utils.c \
pointer_format.c \
hexa_format.c \
upper_hexa_format.c \
ft_strlen.c \
ft_itoa.c \
ft_strdup.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_calloc.c \
ft_bzero.c \
)
OBJS = $(SRC:.c=.o)
SRC_DIR	= ./SRC
INC_DIR	= ./INC
NAME	= libftprintf.a
CC = gcc
AR = ar
FLAGS = -Wall -Wextra -Werror
HEADER_FILE	= $(INC_DIR)/ft_printf.h

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) -rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER_FILE) Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re libft
