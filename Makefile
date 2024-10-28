# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenaven <ibenaven@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 17:15:56 by ibenaven          #+#    #+#              #
#    Updated: 2024/10/28 00:22:46 by ibenaven         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

C_FILES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

BONUS_FILES = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \ 	

INC_FILE = libft.h

O_FILES = $(C_FILES:.c=.o)

O_BONUS = $(BONUS_FILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = -r -c -s

all: $(NAME)

$(NAME):$(O_FILES)
	$(AR) $(ARFLAGS) $(NAME) $(O_FILES)

%.o: %.c $(INC_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(O_FILES)
	rm -rf $(O_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:
	@make $(NAMES) $(O_BONUS)

.PHONY: all clean fclean re
