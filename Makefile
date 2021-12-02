# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 23:41:04 by fdaumas           #+#    #+#              #
#    Updated: 2021/12/02 00:51:13 by fdaumas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=		ft_isalnum.c\
				ft_isprint.c\
				ft_memmove.c\
				ft_strlcpy.c\
				ft_strrchr.c\
				ft_isalpha.c\
				ft_memchr.c\
				ft_memset.c\
				ft_strlen.c\
				ft_tolower.c\
				ft_atoi.c\
				ft_isascii.c\
				ft_memcmp.c\
				ft_strchr.c\
				ft_strncmp.c\
				ft_toupper.c\
				ft_bzero.c\
				ft_isdigit.c\
				ft_memcpy.c\
				ft_strlcat.c\
				ft_strnstr.c\
				ft_strdup.c\
				ft_calloc.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_split.c\
				ft_strtrim.c\
				ft_itoa.c\
				ft_striteri.c\
				ft_strmapi.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c


OBJS		=	${SRCS:.c=.o}
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
HEADER		=	libft.h
NAME		=	libft.a



all :	${NAME}


$(NAME) :	${OBJS}
	ar rcs libft.a ${OBJS}


bonus :		${OBJS}
	ar rcs ${NAME} ${OBJS}


%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -I. -c $< -o $@


clean :
	rm -f ${OBJS}


fclean :	clean
	rm -f ${NAME}


re :		fclean all
