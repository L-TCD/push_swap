SRC	= $(addprefix $(SRC_DIR)/, \
push_swap.c \
ft_atoi.c \
ft_split.c \
)
OBJS = $(SRC:.c=.o)
SRC_DIR	= ./SRC
INC_DIR	= ./INC
NAME	= push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER_FILE	= $(INC_DIR)/push_swap.h
LIBFTPRINTF_PATH	=	./ft_printf
LIBFTPRINTF	=	$(LIBFTPRINTF_PATH)/libftprintf.a

all: $(LIBFTPRINTF) $(NAME)

$(LIBFTPRINTF):
	make -C $(LIBFTPRINTF_PATH)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(LIBFTPRINTF) -o $(NAME)

%.o: %.c $(HEADER_FILE) Makefile $(LIBFTPRINTF)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFTPRINTF_PATH)
	rm -f $(OBJS)

fclean : clean
	make fclean -C $(LIBFTPRINTF_PATH)
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re libft
