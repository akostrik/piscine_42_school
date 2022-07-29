# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 10:21:15 by akostrik          #+#    #+#              #
#    Updated: 2022/07/26 10:35:31 by akostrik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = ft_display_file
SRCS   = ./srcs/main.c ./srcs/ft_display_file.c
OBJS   = ${SRCS:.c=.o}
HDRS   = ./includes
CFLAGS = -Wall -Wextra -Werror 

all: ${OBJS} 
	gcc ${OBJS}  -o ${NAME}

.c.o: 
	gcc ${CFLAGS} -c -I ${HDRS} $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

.PHONY: all clean fclean