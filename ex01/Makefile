SRCS=phonebook.cpp
SRCS_O=$(SRCS:.cpp=.o)
NAME=phonebook

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