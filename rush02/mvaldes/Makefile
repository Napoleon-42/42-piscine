SRCS	= main.c ft_parsing.c numbers.dict split.c util.c// remplir

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wall

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
