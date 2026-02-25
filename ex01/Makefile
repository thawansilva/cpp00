NAME := phonebook

# Source files and Objects
SRC := main.cpp Phonebook.cpp Contact.cpp
OBJS := $(SRC:%.cpp=%.o)

# Flags
C++ := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
CPPFLAGS := $(addprefix -I, .)

all: $(NAME) 

$(NAME): $(OBJS)
	$(C++) $(OBJS) -o $(NAME)
	@touch $@

%.o: %.cpp
	$(C++) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm $(OBJS) 

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
