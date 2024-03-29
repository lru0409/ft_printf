NAME = libftprintf.a

SRCS = $(wildcard Mandatory/*.c)

OBJS = $(SRCS:.c=.o)
LIBFT_OBJS = $(wildcard libft/**/*.o)

CC = cc
CFLAGS = -c -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	make -C libft bonus
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) $^ -o $@

clean :
	make -C libft clean
	rm -f $(OBJS)

fclean : clean
	make -C libft fclean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
