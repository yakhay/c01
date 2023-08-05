# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 15:24:02 by yakhay            #+#    #+#              #
#    Updated: 2023/06/09 15:24:03 by yakhay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


src =  zombieHorde.cpp main.cpp Zombie.cpp

OBJ = $(src:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME  =  Zombie

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
