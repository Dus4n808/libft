LIBC = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c

ADDITIONAL = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

BONUS =

SRCS = $(LIBC) $(ADDITIONAL)

SRCSALL = $(LIBC) $(ADDITIONAL) $(BONUS)

OBJS = $(SRCS:.c=.o)

OBJSALL = $(SRCSALL:.c=.o)

NAME = libft.a

CC = gcc

AR = ar

ARFLAGS = rcs

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) -$(ARFLAGS) $(NAME) $(OBJS)

bonus:	$(OBJSALL)
		$(AR) -$(ARFLAGS) $(NAME) $(OBJSALL)

all: $(NAME)

clean:
	$(RM) $(OBJSALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c -L. -lft -o test
	./test

.PHONY: all clean fclean re bonus

