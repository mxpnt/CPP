NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	${SRC:.cpp=.o}

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all:		${NAME}

%.o:		%.cpp
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJ}
			${CC} ${CFLAGS} -o ${NAME} ${OBJ}

clean:
			rm -rf ${OBJ}

fclean:		clean
			rm -rf ${NAME}

re:			fclean ${NAME}

.PHONY:		re clean fclean