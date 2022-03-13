CC		:= c++
CFLAGS	:= -Wall -Wextra -Werror
COPTS	:= -std=c++98 -pedantic -g -fsanitize=address
INCLUDE	:= -I src

NAME	:= a.out
SRCS	:= \
Animal.cpp Cat.cpp    main.cpp\
Brain.cpp  Dog.cpp
OBJS	:= $(SRCS:%.cpp=%.o)
SRCS	:= $(addprefix src/, $(SRCS))
OBJS	:= $(addprefix obj/, $(OBJS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(COPTS) $(INCLUDE) $(OBJS)

obj/%.o: src/%.cpp
	$(CC) $(CFLAGS) $(COPTS) $(INCLUDE) -o $@ -c $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
