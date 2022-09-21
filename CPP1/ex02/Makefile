NAME		=	hi

SRC			=	main.cpp

OBJ			=	${SRC:.cpp=.o}

CXX			=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all:		${NAME}

%.o:		%.cpp Makefile
			${CXX} ${CXXFLAGS} -c $< -o $@

${NAME}:	${OBJ} Makefile
			${CXX} ${CXXFLAGS} -o ${NAME} ${OBJ}

clean:
			rm -rf ${OBJ}

fclean:		clean
			rm -rf ${NAME}

re:			fclean ${NAME}

.PHONY:		re clean fclean