# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperin <aperin@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 13:00:13 by aperin            #+#    #+#              #
#    Updated: 2022/10/05 14:36:10 by aperin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES	= isalpha.c isdigit.c isalnum.c isascii.c isprint.c strlen.c memset.c \
	bzero.c memcpy.c memmove.c strlcpy.c strlcat.c toupper.c tolower.c \
	strchr.c strrchr.c strncmp.c memchr.c memcmp.c strnstr.c atoi.c calloc.c \
	strdup.c substr.c strjoin.c strtrim.c split.c itoa.c# strmapi.c striteri.c \
	putchar_fd.c putstr_fd.c putendl_fd.c putnbr_fd.c
SRCS	= $(addprefix ft_, $(FILES))
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a

%.o : %.c
	gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs $(NAME) $(OBJS)

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
