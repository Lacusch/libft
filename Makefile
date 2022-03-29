CC= cc
CFLAGS= -Wall -Wextra -Werror
DEPS = libft.h 
NAME = libft.a
SOURCE := $(wildcard *.c)
OBJECT = $(SOURCE:.c=.o)

all: ${NAME}

${NAME}: ${OBJECT}
	ar rc libft.a ${OBJECT}

${OBJECT}: ${SOURCE}
	${CC} ${CFLAGS} -c ${SOURCE}

clean:
	rm -f *.o
fclean: clean
	rm -f *.a 
re:  fclean all 