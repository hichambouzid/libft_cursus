NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

FILS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c  ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c ft_memmove.c \
		ft_toupper.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strnstr.c ft_strdup.c ft_calloc.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c

OBJS = ft_bzero.o   ft_isalpha.o ft_isdigit.o ft_memchr.o  ft_memset.o  ft_strlen.o  ft_strrchr.o \
		ft_isalnum.o ft_isascii.o ft_isprint.o ft_memcpy.o  ft_strchr.o  ft_strncmp.o ft_tolower.o ft_memmove.o \
		ft_toupper.o ft_memcmp.o ft_strlcpy.o ft_strlcat.o ft_atoi.o ft_strnstr.o ft_strdup.o ft_calloc.o ft_substr.o \
		ft_strjoin.o ft_strtrim.o
all: $(NAME)

$(OBJS): $(FILS)
	$(CC) $(FLAGS) -c $(FILS)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
