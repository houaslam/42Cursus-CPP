# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/13 14:57:02 by houaslam          #+#    #+#              #
#    Updated: 2023/10/22 17:30:44 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poly
CC = c++
CC += -fsanitize=address -g3
CFLAGS = -Wall -Wextra -Werror
EXTRA_FLAGS = -std=c++98

SRCS = main.cpp \
	   Animal.cpp \
	   WrongAnimal.cpp \
	   Dog.cpp \
	   Cat.cpp \
	   WrongCat.cpp \

OBJ = ${SRCS:.cpp=.o}

all : ${NAME}

%.o : %.cpp
	c++ ${CFLAGS} ${EXTRA_FLAGS} -c $< -o $@

${NAME} : ${OBJ}
	${CC}  ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}
fclean : clean
	rm -rf ${NAME}

re : fclean all
