# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 09:44:18 by ceduard2          #+#    #+#              #
#    Updated: 2021/09/13 09:52:28 by ceduard2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= clang

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
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
	ft_strdup.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\

BONUS	= ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstmap.c\

OBJS = $(SRCS:.c=.o)

BOBJS = $(BONUS:.c=.o)

$(NAME): $(OBJS) $(BOBJS)
	ar -rs $(NAME) $(OBJS) $(BOBJS)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(BOBJS)
	ar -rs $(NAME) $(BOBJS)

clean:
	rm -f $(OBJS) $(BOBJS)

fclean:
	rm -f $(NAME)

cleanall: clean fclean sclean

re: clean fclean all

#CALL THIS TO CREATE NEW C FILES. IT MIGHT OVERWRITE
#EXISTING FILES, BE CAREFUL.
ccreate: $(SRCS)

#CALL THIS TO CREATE BONUS C FILES
bcreate: $(BONUS)

$(BONUS):
	touch $@

$(SRCS):
	touch $@

.PHONY: all clean fclean re

#THIS PART BELOW IS FOR UNIT TESTS
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BOBJS)

sclean:
	rm -rf libft.so
