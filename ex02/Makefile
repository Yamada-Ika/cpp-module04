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

run: all
	./a.out
run-normal: all
	export IYAMADA_CPP04_EX02_NORMAL=TRUE; ./a.out
run-normal2: all
	export IYAMADA_CPP04_EX02_NORMAL2=TRUE; ./a.out
run-copy: all
	export IYAMADA_CPP04_EX02_COPY=TRUE; ./a.out

leak-normal:
	export IYAMADA_CPP04_EX02_NORMAL=TRUE; leaks -q -atExit -- ./a.out
leak-normal2:
	export IYAMADA_CPP04_EX02_NORMAL2=TRUE; leaks -q -atExit -- ./a.out
leak-copy:
	export IYAMADA_CPP04_EX02_COPY=TRUE; leaks -q -atExit -- ./a.out

.PHONY: all clean fclean re run run-normal run-normal2 run-copy leak-normal leak-normal2 leak-copy

