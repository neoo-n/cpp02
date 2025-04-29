NAME	=	fixed1
SRCS	=	main.cpp Fixed.cpp
OBJS	=	${SRCS:.cpp=.o}
CC		=	c++
CFLAGS	=	-Werror -Wextra -Wall -std=c++98

# Colors and style
END		:= \033[0m
WHITE	:= \033[1;37m
NC		:= \033[0m
RED		:= \033[0;31m
PINK	:= \033[1;35m
GREEN	:= \033[0;32m
BOLD	:= \033[1m
L_PURPLE:= \033[38;5;55m
YELLOW	:= \033[0;33m
BLUE	:= \033[34m

 # Rules
all:	${NAME} header

header:
	@echo "$(L_PURPLE)"
	@echo ".------..------..------..------..------."
	@echo "|C.--. ||P.--. ||P.--. ||0.--. ||0.--. |"
	@echo "| :/\: || :/\: || :/\: || :/\: || :/\: |"
	@echo "| :\/: || (__) || (__) || :\/: || :\/: |"
	@echo "| '--'C|| '--'P|| '--'P|| '--'0|| '--'0|"
	@echo "\`------'\`------'\`------'\`------'\`------'"
	@echo "$(END)"	

${NAME}:	${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	@${CC} ${CFLAGS} -c -o $@ $<

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re header