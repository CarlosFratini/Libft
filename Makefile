# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 09:44:18 by ceduard2          #+#    #+#              #
#    Updated: 2021/08/21 10:25:07 by ceduard2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= clang

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_isalpha.c\
	ft_toupper.c\
	ft_isdigit.c\
	ft_tolower.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_strchr.c\
	ft_isprint.c\
	ft_strrchr.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memchr.c\
	ft_memcpy.c\
	ft_memcmp.c\
	ft_memmove.c\
	ft_strnstr.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_atoi.c\

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

.PHONY: all clean fclean re

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${NAME}

re: clean fclean all

#CALL THIS TO CREATE NEW C FILES. IT MIGHT OVERWRITE
#EXISTING FILES, BE CAREFUL.
ccreate: ${SRCS}

${SRCS}:
	touch $@
#THIS WILL ERASE ALL C FILES, NO TURNNING BACK
#BE SMART
cclean:
	rm -f ${SRCS}
