NAME = libftprintf.a

SRCS =	ft_hex_printer.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \

OBJS :=$(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.PHONY: all tester clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

tester: $(SRCS)
	cc $(CFLAGS) $(SRCS)
	./a.out
	make fclean
	rm a.out
