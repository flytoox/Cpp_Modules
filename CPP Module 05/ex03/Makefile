NAME = Bureaucrat
FLAGS = -std=c++98 -Wall -Wextra -Werror
HEADER = $(wildcard *.hpp)

SRCS = $(wildcard *.cpp)
OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADER)
	c++ -c $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf *_shrubbery

re: fclean all