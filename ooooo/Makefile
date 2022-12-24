NAME = push_swap.a

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

RM				= rm -f

GCCF = gcc -Wall -Wextra -Werror -o push_swap

LIB = ar -rcs

SRCS = push_swap.c teleportin.c sortin.c sortin_v2.c ext_func.c

# BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
#                 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
#                 ft_lstmap.c

.c.o:
				${GCCF} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
				@${LIB} ${NAME} ${OBJS}

# bonus: ${OBJSBONUS}
# 				@${LIB} ${NAME} ${OBJSBONUS}

all:	${NAME}

clean:
				${RM} ${OBJS}

fclean: clean
				${RM} ${NAME}

re:				fclean all
				${fclean} ${all}