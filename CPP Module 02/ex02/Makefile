# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 16:04:41 by obelaizi          #+#    #+#              #
#    Updated: 2023/11/01 22:00:47 by obelaizi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
FLAGS = -std=c++98  -Wall -Wextra -Werror
HEADER = Fixed.hpp

SRCS = $(wildcard *.cpp)
OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADER)
	c++ -c $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $(OBJS)  $(FLAGS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all