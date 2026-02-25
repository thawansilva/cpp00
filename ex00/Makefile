NAME := megaphone

# Source files and Objects
SRC := megaphone.cpp
OBJS := $(SRC:%.cpp=%.o)

# Flags
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
CPPFLAGS := $(addprefix -I, .)

all: $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	@touch $@

%.o: %.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm $(OBJS) 

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
