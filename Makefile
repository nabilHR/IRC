# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbaghoug <nbaghoug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 10:47:44 by nbaghoug          #+#    #+#              #
#    Updated: 2024/05/19 10:31:51 by nbaghoug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CXX = c++
file_cpp = ircserv.cpp  server.cpp
file_o   = ircserv.o  server.o

NAME = ircserv

all : $(NAME)

$(NAME): $(file_o)
	$(CXX) $(CXXFLAGS) $(file_o) -o $(NAME)

fclean : clean
	 rm -rf $(NAME)

clean:
	rm -rf $(file_o)

re:fclean all

.PHONY : all re fclean clean