NAME		=	phone

INC			=	phone.hpp \
				phoneBookClass.hpp \
				contactClass.hpp

SRCS		=	main.cpp \
				phoneBookClass.cpp \
				contactClass.cpp


OBJS		=	${addprefix objs/, ${SRCS:.cpp=.o}}

CXX			=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all:		${NAME}

objs/%.o:	%.cpp ${INC} Makefile
			@mkdir -p ${dir $@}
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${INC}
			${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -rf objs/

fclean:		clean
			rm -rf ${NAME}

re :		fclean ${NAME}

.PHONY:		all clean fclean re