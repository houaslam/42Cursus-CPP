# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/13 14:57:02 by houaslam          #+#    #+#              #
#    Updated: 2023/08/13 15:21:24 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CC = c++ -fsanitize=address -g3
CFLAGS = -Wall -Wextra -Werror
EXTRA_FLAGS = -std=c++98

SRCS = main.cpp \
	   Animal.cpp

OBJ = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${EXTRA_FLAGS} ${OBJ} -o ${NAME}

clean :
	rm ${OBJ}
fclean : clean
	rm -f ${NAME}

re : fclean all
