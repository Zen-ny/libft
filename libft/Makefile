# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naadam <naadam@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 16:32:12 by naadam            #+#    #+#              #
#    Updated: 2023/02/01 17:21:44 by naadam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_strdup.c ft_striteri.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

BNS_SRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
	
OBJ = $(SRCS:.c=.o)

BNS_OBJ = $(BNS_SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEADER = ./libft.h

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ) $(BNS_OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(BNS_OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ) $(BNS_OBJ)

.PHONY: clean fclean all re bonus libft 