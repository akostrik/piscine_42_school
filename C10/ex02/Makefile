# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 10:38:38 by akostrik          #+#    #+#              #
#    Updated: 2022/07/28 10:56:28 by akostrik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = ft_tail
SRCS   = ./srcs/main.c ./srcs/atoi_option.c ./srcs/ft_tail.c ./srcs/utilities.c ./srcs/put_error.c
OBJS   = ${SRCS:.c=.o}
HDRS   = ./includes
CFLAGS = -Wall -Wextra -Werror 
#TEST   = ../../test/test1 - 
#	tail ${TEST} -c 0 | cat -e 
#	@echo ""
#	./ft_tail ${TEST} -c 0 | cat -e
#	@echo ""

all: ${OBJS}
	gcc ${OBJS} -L. -lft -o ${NAME}

.c.o:
	gcc ${CFLAGS} -c -I ${HDRS} $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

.PHONY: all clean fclean