# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 16:04:41 by obelaizi          #+#    #+#              #
#    Updated: 2023/11/07 19:31:55 by obelaizi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
FLAGS = -std=c++98 -Wall -Wextra -Werror
HEADER = ClapTrap.hpp ScavTrap.hpp

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

re: fclean all