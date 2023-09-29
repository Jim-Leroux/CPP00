# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jileroux <jileroux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 15:33:49 by jileroux          #+#    #+#              #
#    Updated: 2023/09/22 15:40:25 by jileroux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###################################################
## ARGUMENTS

NAME	=	megaphone
CFLAGS	=	--std=c++98 -Wall -Wextra -Werror -g3
CC		=	c++

###################################################
## SOURCES

SRC_FILES	= 	megaphone.cpp

###################################################
## RULES

all: ${NAME}

${NAME}: ${SRC_FILES}
	${CC} ${CFLAGS} ${SRC_FILES} -o ${NAME}

%.o: %.cpp
	%{CC} ${CFLAGS} $< -o $@

clean :
	rm -rf *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
