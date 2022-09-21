NAME		=	weapon

INC			=	Weapon.hpp \
				HumanA.hpp \
				HumanB.hpp

SRCS		=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp 

OBJS		=	${addprefix objs/, ${SRCS:.cpp=.o}}

all:			${NAME}

objs/%.o:	%.cpp ${INC} Makefile
			@mkdir -p ${dir $@}
			${CXX} ${CXXFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${INC} Makefile
			${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -rf objs/

fclean:		clean
			rm -rf ${NAME}

re :		fclean ${NAME}

.PHONY:		all clean fclean re