# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 11:28:34 by egun              #+#    #+#              #
#    Updated: 2022/02/06 18:07:49 by egun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

list = ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c\
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_itoa.c

Bonus_src = ft_lstnew.c \
			ft_lstadd_back.c \
			ft_lstlast.c \
			ft_lstsize.c \
			ft_lstadd_front.c \
			ft_lstdelone.c \
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c
			
B_obj = $(Bonus_src:.c=.o)
OBJS = $(list:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all:$(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS)  -c $<	-o $@ 
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(B_obj)

bonus : $(OBJS) $(B_obj)
	ar -rcs $(NAME) $(OBJS) $(B_obj)
re:fclean $(NAME)

.PHONY: clean fclean all re bonus