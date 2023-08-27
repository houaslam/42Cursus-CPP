# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 12:56:11 by houaslam          #+#    #+#              #
#    Updated: 2023/08/26 09:14:58 by hajarouasla      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
CC = c++
CC += -fsanitize=address -g3
CFLAGS = -Wall -Wextra -Werror
EXTRA_CFLAGS = -std=c++98

SRC = main.cpp \
	  AMateria.cpp \
	  Character.cpp \
	  Cure.cpp \
	  Ice.cpp \
	  MateriaSource.cpp

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${EXTRA_CFLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all