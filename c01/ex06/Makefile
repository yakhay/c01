# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 17:14:09 by yakhay            #+#    #+#              #
#    Updated: 2023/06/09 17:14:29 by yakhay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src =  main.cpp Harl.cpp

OBJ = $(src:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME  =  harlFilter

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
