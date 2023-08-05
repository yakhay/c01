# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 16:59:12 by yakhay            #+#    #+#              #
#    Updated: 2023/06/09 16:59:33 by yakhay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src =  main.cpp Harl.cpp

OBJ = $(src:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME  =  Harl

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
