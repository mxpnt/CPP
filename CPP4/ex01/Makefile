NAME		=	notBurnTheWorld

INC			=	AnimalClass.hpp \
				DogClass.hpp \
				CatClass.hpp \
				BrainClass.hpp

SRCS		=	main.cpp \
				AnimalClass.cpp \
				DogClass.cpp \
				CatClass.cpp \
				BrainClass.cpp

OBJS		=	${addprefix objs/, ${SRCS:.cpp=.o}}

CXX			=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all:			${NAME}

objs/%.o:		%.cpp ${INC} Makefile
				@mkdir -p ${dir $@}
				${CXX} ${CXXFLAGS} -c $< -o $@

${NAME}:		${OBJS} ${INC} Makefile
				${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
				rm -rf objs/

fclean:			clean
				rm -rf ${NAME}

re :			fclean ${NAME}

.PHONY:			all clean fclean re