# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 13:23:12 by vnaslund          #+#    #+#              #
#    Updated: 2024/01/25 18:05:17 by vnaslund         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern

SOURCES = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
		  RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) ShrubberyCreationForm_shrubbery

re: fclean all

.PHONY: all clean fclean re