# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 11:47:37 by wolee             #+#    #+#              #
#    Updated: 2021/12/22 15:49:05 by wolee            ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RFLAGS = rm -f

NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c\
		ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c\
		ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_striteri.c ft_isalpha.c\
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c\
		ft_tolower.c ft_calloc.c ft_strdup.c ft_split.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strmapi.c\
		ft_putnbr_fd.c\
		
BONUS_S = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c\
	ft_lstdelone.c ft_lstmap.c ft_lstiter.c ft_lstlast.c ft_lstsize.c\

OBJS = $(SRCS:.c=.o)
BONUS_O = $(BONUS_S:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(NAME) : $(OBJS)
	ar cr $(NAME) $(OBJS)

bonus : $(BONUS_O)
	ar cr $(NAME) $(BONUS_O)
clean : 
	$(RFLAGS) $(OBJS) $(BONUS_O)

fclean : clean
	$(RFLAGS) $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re