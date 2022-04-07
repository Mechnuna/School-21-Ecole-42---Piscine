SRCS	=  main1.c ft_strcat.c ft_tail.h ft_putchar.c ft_strlen.c
OBJS	= ${SRCS:.c=.o}
NAME	= ft_tail
CC		= gcc
INC		= includes
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

.PHONY: all clean ${NAME} fclean
