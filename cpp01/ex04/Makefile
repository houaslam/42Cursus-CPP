# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 18:36:19 by houaslam          #+#    #+#              #
#    Updated: 2023/06/06 19:40:29 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CC = c++ -fsanitize=address
CFLAGS = -Wall -Wextra -Werror
EXTRA_FLAGS = -std=c++98

SRCS = sedforlosers.cpp \
	   main.cpp \

OBJ = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${EXTRA_FLAGS} ${OBJ} -o ${NAME}

clean :
	rm ${OBJ}
fclean : clean
	rm -f ${NAME}

re : fclean all