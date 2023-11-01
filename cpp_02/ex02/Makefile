# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 08:11:54 by houaslam          #+#    #+#              #
#    Updated: 2023/11/01 17:23:54 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CCPP = c++ -fsanitize=address -g3
CPPFLAGS = -Wall -Wextra -Werror
EXTRA_CFLAGS = -std=c++98

SRC = main.cpp \
	Fixed.cpp

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