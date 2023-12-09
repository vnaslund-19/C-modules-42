# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 17:12:42 by vnaslund          #+#    #+#              #
#    Updated: 2023/12/09 18:28:30 by vnaslund         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

SOURCES = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongDog.cpp WrongCat.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re