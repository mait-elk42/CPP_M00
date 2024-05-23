# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 18:48:31 by mait-elk          #+#    #+#              #
#    Updated: 2024/04/16 18:48:31 by mait-elk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= PhoneBook.cpp Contact.cpp main.cpp
SRCS_O= $(SRCS:.cpp=.o)
NAME= phonebook

all: $(NAME)

$(NAME): $(SRCS_O) Contact.hpp PhoneBook.hpp
	c++ -std=c++98 $(SRCS_O) -o $(NAME) 

%.o: %.cpp Contact.hpp PhoneBook.hpp
	c++ -c -std=c++98 $< -o $@ 

clean:
	rm -f $(SRCS_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean