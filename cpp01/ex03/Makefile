# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 15:18:09 by houaslam          #+#    #+#              #
#    Updated: 2023/06/04 15:19:10 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = c++ -fsanitize=address
CFLAGS = -Wall -Wextra -Werror
EXTRA_FLAGS = -std=c++98

SRCS = HumanA.cpp \
	   HumanB.cpp \
	   Weapon.cpp \
	   main.cpp

OBJ = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${EXTRA_FLAGS} ${OBJ} -o ${NAME}

clean :
	rm ${OBJ}
fclean : clean
	rm -f ${NAME}

re : fclean all