# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 18:48:31 by mait-elk          #+#    #+#              #
#    Updated: 2024/08/15 17:10:05 by mait-elk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS= #-Wall -Wextra -Werror -std=c++98
SRCS= Account.cpp
SRCS_O= $(SRCS:.cpp=.o)
NAME= tests

all: $(NAME)

$(NAME): $(SRCS_O) Account.hpp
	c++ $(FLAGS)  Tests.cpp $(SRCS_O) -o $(NAME) 

%.o: %.cpp Account.hpp
	c++ -c $(FLAGS) $< -o $@ 

clean:
	rm -f $(SRCS_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean