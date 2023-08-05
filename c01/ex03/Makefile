# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 15:24:17 by yakhay            #+#    #+#              #
#    Updated: 2023/06/09 16:15:09 by yakhay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src =  main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(src:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME  =  Weapon

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
