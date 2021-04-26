NAME		=	ex00

SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:.c=.o)
CC			=	clang++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	$(CC) $(FLAGS)

%.o : %.c
			$(CC) $(FLAGS) -c $<  -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	${OBJS}
			$(COMPILE) $(OBJS) -o $(NAME)

clean:
			rm -f ${OBJS}

fclean:
			rm -f ${OBJS}
			rm -f ${NAME}

re:			fclean all

.PHONY:		clean fclean all re
