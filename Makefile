# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 09:44:18 by ceduard2          #+#    #+#              #
#    Updated: 2021/08/23 09:41:42 by ceduard2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= clang

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_tolower.c\
	ft_toupper.c\

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	ar -rs ${NAME} ${OBJS}

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
