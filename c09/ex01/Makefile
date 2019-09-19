# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 15:02:20 by lnelson           #+#    #+#              #
#    Updated: 2019/09/18 18:18:00 by lnelson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror -I./includes

SRCS_P	= ./srcs

RM		= rm -f

SRCS	= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_swap.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

CC		= gcc  

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}
			
all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re 