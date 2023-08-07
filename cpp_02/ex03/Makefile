# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 08:11:54 by houaslam          #+#    #+#              #
#    Updated: 2023/08/07 10:33:48 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CC = c++ -fsanitize=address -g3
CFLAGS = -Wall -Wextra -Werror
EXTRA_FLAGS = -std=c++98

SRCS = main.cpp \
	   Fixed.cpp \
	   bsp.cpp \
	   Point.cpp

OBJ = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${EXTRA_FLAGS} ${OBJ} -o ${NAME}

clean :
	rm ${OBJ}
fclean : clean
	rm -f ${NAME}

re : fclean all