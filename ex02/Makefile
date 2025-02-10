# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 14:27:18 by phartman          #+#    #+#              #
#    Updated: 2025/02/10 14:27:19 by phartman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Account
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
OBJDIR = objs
SRCS = Account.cpp tests.cpp
OBJS := $(SRCS:%.cpp=$(OBJDIR)/%.o)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)/*.o
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

