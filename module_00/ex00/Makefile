# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/06 18:09:59 by sdunckel          #+#    #+#              #
#    Updated: 2019/12/06 21:53:45 by sdunckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone

SRCS			= \
					megaphone.cpp

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
