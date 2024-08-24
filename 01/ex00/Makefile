# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/24 10:57:25 by mait-elk          #+#    #+#              #
#    Updated: 2024/08/24 11:03:07 by mait-elk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
SRCS_O= $(SRCS:.cpp=.o)
NAME= brainz

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