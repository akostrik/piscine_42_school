# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 10:38:38 by akostrik          #+#    #+#              #
#    Updated: 2022/07/28 14:17:51 by akostrik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = do-op
SRCS   = ./srcs/main.c  ./srcs/calc_tab_func.c ./srcs/ft.c ./srcs/ft_putnbr.c
OBJS   = ${SRCS:.c=.o}
HDRS   = ./includes
CFLAGS = -Wall -Wextra -Werror 

all: ${OBJS}
	gcc ${OBJS} -o ${NAME}

.c.o:
	gcc ${CFLAGS} -c -I ${HDRS} $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

.PHONY: all clean fclean