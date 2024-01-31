NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c \
       conversions/convert_c.c conversions/convert_d_and_i.c conversions/convert_maj_x.c \
	   conversions/convert_p.c conversions/convert_s.c conversions/convert_u.c \
	   conversions/convert_x.c ft_itoa.c ft_calloc.c ft_bzero.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
