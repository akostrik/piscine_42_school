# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 00:52:37 by akostrik          #+#    #+#              #
#    Updated: 2022/07/26 23:54:33 by akostrik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# "Nothing to be done" = there is no rule for the target, but the target exists
# "is up to date" = there is a rule, but the target is already up-to-date 
# include *.d правильно работает только если в каталоге хотя бы один .d
# .o из .c вызовом сс {CFLAGS) прописывать не нужно, по умолчанию 

#SRCS     = ${wildcard ./srcs/*.c}
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS    = ${SRCS:.c=.o}
HDRS     = ./includes
CFLAGS   = -Wall -Wextra -Werror

all: libft.a

libft.a: ${OBJS} 
	ar rc libft.a ${OBJS}

.c.o: 
	gcc ${CFLAGS} -I ${HDRS} -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f libft.a

re: fclean all
	
.PHONY: all clean fclean re
