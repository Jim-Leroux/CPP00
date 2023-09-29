# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jileroux <jileroux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 12:43:34 by jileroux          #+#    #+#              #
#    Updated: 2023/09/27 16:19:42 by jileroux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###################################################
## ARGUMENTS

NAME	=	phonebook
CFLAGS	=	--std=c++98 -Wall -Wextra -Werror -g3
CC		=	c++

###################################################
## INCLUDES

INCLUDES	=	Contact.hpp\
				Phonebook.hpp

###################################################
## SOURCES

SRC_FILES	=	Main.cpp\
				Contact.cpp\
				Phonebook.cpp

###################################################
## RULES

all: ${NAME}

${NAME}: ${SRC_FILES} ${INCLUDES}
	${CC} ${CFLAGS} ${SRC_FILES} -o ${NAME}

%.o: %.cpp
	%{CC} ${CFLAGS} $< -o $@

clean :
	rm -rf *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
