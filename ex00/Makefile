NAME := megaphone
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
OBJDIR = objs
SRCS = megaphone.cpp
OBJS := $(OBJDIR)/$(SRCS:.cpp=.o)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

