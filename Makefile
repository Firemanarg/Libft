# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/19 11:12:35 by lsilva-q          #+#    #+#              #
#    Updated: 2021/09/19 11:31:45 by lsilva-q         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
AR		=	ar rcs
SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	\
			ft_isprint.c	ft_strlen.c		ft_memset.c		ft_bzero.c		\
			ft_memcpy.c		ft_memmove.c	ft_strlcpy.c	ft_strlcat.c	\
			ft_toupper.c	ft_tolower.c	ft_strchr.c		ft_strrchr.c	\
			ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c	\
			ft_atoi.c		ft_calloc.c		ft_strdup.c						\
			ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_itoa.c		\
			ft_strmapi.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	\
			ft_putnbr_fd.c	ft_striteri.c	ft_split.c
OBJS	=	$(SRCS:.c=.o)
B_SRCS	=	ft_lstnew.c			ft_lstadd_front.c		ft_lstsize.c		\
			ft_lstlast.c		ft_lstadd_back.c		ft_lstdelone.c		\
			ft_lstclear.c		ft_lstiter.c			ft_lstmap.c
B_OBJS	=	$(B_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) -c $(SRCS)

bonus: $(OBJS) $(B_OBJS)
	$(AR) $(NAME) $(OBJS) $(B_OBJS)

$(B_OBJS): $(B_SRCS)
	$(CC) -c $(B_SRCS)

clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus