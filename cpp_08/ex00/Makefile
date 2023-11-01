# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 16:20:04 by houaslam          #+#    #+#              #
#    Updated: 2023/11/01 16:40:53 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind
CCPP = c++
CCPP += -fsanitize=address -g3
CPPFLAGS = -Wall -Wextra -Werror
EXTRA_CFLAGS = -std=c++98

SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

%.o : %.cpp
	c++ ${CPPFLAGS} ${EXTRA_CFLAGS} -c $< -o $@

${NAME} : ${OBJ}
	${CCPP} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all