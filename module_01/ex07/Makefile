# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/06 18:09:59 by sdunckel          #+#    #+#              #
#    Updated: 2020/03/22 19:47:36 by sdunckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= replace

SRCS			= \
					replace.cpp \
					File.cpp

CC				= clang++
CFLAGS 			= -Wall -Wextra -Werror
RM				= rm -f

all:			$(NAME)

$(NAME):		$(SRCS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: 		all fclean clean re
