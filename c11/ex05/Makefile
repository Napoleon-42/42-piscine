# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/29 15:32:49 by napoleon          #+#    #+#              #
#    Updated: 2019/09/29 16:41:27 by napoleon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op

OBJS	= ${SRCS:.c=.o}

CC		= gcc

FLAGS	=

SRCS	= functions.c main.c

RM_O	= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${FLAGS} ${OBJS} -o do-op

clean:		
			${RM_O} ${OBJS}
			
fclean:		clean
			${RM_O} ${NAME}

re:			fclean all