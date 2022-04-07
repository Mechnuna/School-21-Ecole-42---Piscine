SRCS	=  main.c
OBJS	= ${SRCS:.c=.o}
NAME	= ft_display_file
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
