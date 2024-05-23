# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 18:52:27 by mait-elk          #+#    #+#              #
#    Updated: 2024/04/16 18:52:28 by mait-elk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=megaphone.cpp
SRCS_O=$(SRCS:.cpp=.o)
NAME=megaphone

all: $(NAME)

$(NAME): $(SRCS_O)
	c++ -std=c++98 $(SRCS_O) -o $(NAME)

%.o: %.cpp
	c++ -c -std=c++98 $< -o $@

clean:
	rm -f $(SRCS_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean