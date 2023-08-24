# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 12:56:11 by houaslam          #+#    #+#              #
#    Updated: 2023/08/24 13:00:20 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
CC = c++
CC += -fsanitize=address -g3
CFLAGS = -wall -wextra -werror
EXTRA_CFLAGS = -std=c++98

SRC = main.cc \
	  AMateria.cpp

OBJ = ${SRC:.cpp =.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${EXTRA_CFLAGS} ${OBJ} -O ${NAME}

clean
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all