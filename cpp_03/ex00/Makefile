# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 10:57:27 by houaslam          #+#    #+#              #
#    Updated: 2023/11/05 13:04:58 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = battle
CC = c++ -fsanitize=address
CFLAGS = -Wall -Wextra -Werror
EXTRA_FLAGS = -std=c++98

SRCS = main.cpp \
	   ClapTrap.cpp

OBJ = ${SRCS:.cpp=.o}

all : ${NAME}

%.o : %.cpp
	c++ ${CFLAGS} ${EXTRA_CFLAGS} -c $< -o $@

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${EXTRA_CFLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all