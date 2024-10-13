OUTPUT = libft.a

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
	ft_memcmp.c # \
	#ft_strnstr.c \
	#ft_atoi.c \
	#ft_calloc.c \
	#ft_strdup.c 

INC_FILE = libft.h


O_FILES = $(C_FILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = -r -c -s

all: $(OUTPUT)


$(OUTPUT):$(O_FILES)
	$(AR) $(ARFLAGS) $(OUTPUT) $(O_FILES)

%.o: %.c $(INC_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(O_FILES)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all

.PHONY: all clean fclean r
