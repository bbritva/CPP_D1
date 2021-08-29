NAME		=	z_controller
CPP			=	clang++ $(CFLAGS)
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS		=	$(SRCS:.cpp=.o)
HDR			=	includes/philo_main.h
CYAN		=	\x1B[36m
MAGENTA		=	\x1B[35m
GREEN		=	\033[92m
ENDCOLOR	=	\x1B[0m

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CPP) $(OBJS) -o $(NAME)
			@echo "${GREEN}"$(NAME)" is compiled${ENDCOLOR}"

clean:
			@$(RM) $(OBJS)
			@echo objs deleted

fclean:		clean
			@$(RM) $(NAME)
			@echo $(NAME) deleted

re:			fclean all

%.o:		%.cpp
			@$(CPP) -c $< -o $@
			@echo $@ compilled

.PHONY:		all clean fclean re so bonus norm