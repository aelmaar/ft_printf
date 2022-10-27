OBJS = ft_printf.o ft_putchar.o ft_puthex.o ft_putnbr.o ft_putptr.o ft_putstr.o ft_putunbr.o ft_write.o

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

AR = ar -rcs

RM = rm -f

$(NAME): $(OBJS)
	$(AR) $(NAME) $?

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean