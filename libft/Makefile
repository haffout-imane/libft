
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strrchr.c ft_strlen.c  ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isalpha.c \
ft_isprint.c  ft_memset.c ft_toupper.c ft_tolower.c ft_strchr.c ft_atoi.c \
ft_bzero.c	ft_strnstr.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_strncmp.c \
ft_memcmp.c ft_strdup.c ft_calloc.c ft_strlcpy.c ft_strlcat.c ft_putchar_fd.c \
ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
ft_striteri.c ft_strmapi.c ft_split.c ft_itoa.c

SRCSB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c\
ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c


OBJ = $(SRCS:.c=.o)
OBJB = $(SRCSB:.c=.o)

all: $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
bonus:  $(NAME) $(OBJB)
	ar rcs $(NAME) $(OBJB)

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all
