# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svarela <svarela@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 16:00:25 by svarela           #+#    #+#              #
#    Updated: 2023/11/08 12:51:50 by svarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_toupper.c ft_tolower.c ft_strlcpy.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_strtrim.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c \

NAME		= libft.a
INCLUDE		= libft.h

OBJS		= ${SRCS:.c=.o}

AR			= ar rc

LIB			= ranlib

CC			= cc

CFLAGS		= -Wall -Wextra -Werror 

all:		${NAME}

%.o: %.c

			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS} 

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

