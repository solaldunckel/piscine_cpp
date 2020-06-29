# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/06 18:09:59 by sdunckel          #+#    #+#              #
#    Updated: 2020/06/28 18:03:23 by sdunckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= cato9tails

SRCS_LIST		= \
					main.cpp \
					File.cpp
SRCS_FOLDER		= srcs
SRCS			= $(addprefix ${SRCS_FOLDER}/, ${SRCS_LIST})

OBJS			= $(SRCS:.cpp=.o)

HEADER			= includes

CC				= clang++
CFLAGS 			= -Wall -Wextra -Werror
RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -I $(HEADER) $(OBJS) -o $(NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: 		all fclean clean re
