# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperin <aperin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 13:00:13 by aperin            #+#    #+#              #
#    Updated: 2022/10/03 13:07:57 by aperin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a

%.o : %.c
	gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc $(OBJS) $(NAME)

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
