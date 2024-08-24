# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/24 11:39:18 by mait-elk          #+#    #+#              #
#    Updated: 2024/08/24 12:32:58 by mait-elk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS= main.cpp
SRCS_O= $(SRCS:.cpp=.o)
NAME= main

all: $(NAME)

$(NAME): $(SRCS_O)
	$(COMPILER) $(CFLAGS) $(SRCS_O) -o $(NAME)

%.o: %.cpp
	$(COMPILER) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(SRCS_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean