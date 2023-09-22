# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orakib <orakib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 20:08:44 by orakib            #+#    #+#              #
#    Updated: 2023/09/22 17:13:52 by orakib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Forms

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp PresedentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp

HEADER = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp PresedentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re