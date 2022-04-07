SRCS	=  main.c print.c ft_atoi.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
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
