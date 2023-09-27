# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 16:20:04 by houaslam          #+#    #+#              #
#    Updated: 2023/09/23 13:03:41 by hajarouasla      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Temp
CC = c++
CC += -fsanitize=address -g3
CFLAGS = -Wall -Wextra -Werror
EXTRA_CFLAGS = -std=c++98

SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

%.o : %.cpp
	c++ -c $< -o $@

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${EXTRA_CFLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all