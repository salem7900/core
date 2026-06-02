NAME = libftprintf.a

SRC = ft_printf.c ft_putchar_pf.c ft_putstr_pf.c ft_putnbr_pf.c \
		ft_putptr_pf.c ft_puthexa_pf.c ft_putunsign_pf.c

OBJS = ${SRC:.c=.o}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .

.o:.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
