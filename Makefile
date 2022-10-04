# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperin <aperin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 13:00:13 by aperin            #+#    #+#              #
#    Updated: 2022/10/03 14:53:05 by aperin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES	= isalpha.c isdigit.c isalnum.c isascii.c isprint.c strlen.c memset.c \
	bzero.c memcpy.c memmove.c strlcpy.c strlcat.c toupper.c tolower.c \
	strchr.c strrchr.c strncmp.c memchr.c memcmp.c strnstr.c atoi.c
SRCS	= $(addprefix ft_, $(FILES))
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
