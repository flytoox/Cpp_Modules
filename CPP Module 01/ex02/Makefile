# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 16:54:32 by obelaizi          #+#    #+#              #
#    Updated: 2023/10/20 22:23:18 by obelaizi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
FLAGS = -std=c++98 -Wall -Wextra -Werror
HEADER = Zombie.hpp

SRCS = $(wildcard *.cpp)
OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADER)
	c++ -c $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all