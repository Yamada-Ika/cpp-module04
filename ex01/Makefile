CC		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror
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
	$(CC) -o $(NAME) $(CXXFLAGS) $(COPTS) $(INCLUDE) $(OBJS)

obj/%.o: src/%.cpp
	$(CC) $(CXXFLAGS) $(COPTS) $(INCLUDE) -o $@ -c $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
