# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 16:20:04 by houaslam          #+#    #+#              #
#    Updated: 2023/10/22 11:58:24 by hajarouasla      ###   ########.fr        #
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
	c++  ${CFLAGS} ${EXTRA_CFLAGS} -c  $< -o $@

${NAME} : ${OBJ}
	${CC} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all