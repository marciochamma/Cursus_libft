# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 17:25:13 by mchamma           #+#    #+#              #
#    Updated: 2023/05/23 12:52:39 by mchamma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =  libft.a
FLAGS = -Werror -Wextra -Wall

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c	ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRC_OBJ = $(SRC:.c=.o)

BONUS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	ar -rcs libft.a $(SRC_OBJ)

bonus: $(BONUS_OBJ)
	ar -rcs libft.a $(BONUS_OBJ)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(SRC_OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f *.a

re: fclean all

.PHONY: all bonus clean fclean re