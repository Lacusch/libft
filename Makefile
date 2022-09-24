CC= cc
CFLAGS= -Wall -Wextra -Werror
DEPS = libft.h 
NAME = libft.a

SOURCE = is/ft_isalnum.c is/ft_isalpha.c is/ft_isascii.c is/ft_isdigit.c is/ft_isprint.c\
		str/ft_strchr.c str/ft_strdup.c str/ft_strdup.c str/ft_striteri.c str/ft_strjoin.c\
		str/ft_strlcat.c str/ft_strlcpy.c str/ft_strlen.c str/ft_strmapi.c str/ft_split.c\
		str/ft_strncmp.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strtrim.c str/ft_substr.c\
		put/ft_putchar_fd.c put/ft_putendl_fd.c put/ft_putnbr_fd.c put/ft_putstr_fd.c\
		mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memcpy.c mem/ft_memmove.c\
		mem/ft_memset.c mem/ft_bzero.c mem/ft_calloc.c\
		to/ft_atoi.c to/ft_itoa.c to/ft_tolower.c to/ft_toupper.c\
		lst/ft_lstadd_back.c lst/ft_lstadd_front.c lst/ft_lstclear.c lst/ft_lstdelone.c\
		lst/ft_lstiter.c lst/ft_lstlast.c lst/ft_lstmap.c lst/ft_lstnew.c lst/ft_lstsize.c\
		printf/ft_prinft.c\
		gnl/get_next_line.c gnl/get_next_line_utils.c\
		put/ft_put_longnb_fd.c

OBJECT = $(SOURCE:.c=.o)
all: ${NAME}

${NAME}: ${OBJECT}
	ar rc ${NAME} ${OBJECT}

bonus: ${NAME} ${BOBJECT}
	ar rc ${NAME}  ${OBJECT} ${BOBJECT}

clean:
	rm -f is/*.o gnl/*.o lst/*.o mem/*.o put/*.o str/*.o to/*.o printf/*.o
fclean: clean
	rm -f *.a 
re:  fclean all 

