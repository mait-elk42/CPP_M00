# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 18:52:27 by mait-elk          #+#    #+#              #
#    Updated: 2024/09/10 17:49:18 by mait-elk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS= FragTrap.cpp ClapTrap.cpp ScavTrap.cpp main.cpp
SRCS_O= $(SRCS:.cpp=.o)
NAME= main

all: $(NAME)

$(NAME): $(SRCS_O)
	c++ $(CFLAGS) $(SRCS_O) -o $(NAME)

%.o: %.cpp
	c++ -c $(CFLAGS) $< -o $@

clean:
	rm -f $(SRCS_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
