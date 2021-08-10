# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 20:46:46 by bledda            #+#    #+#              #
#    Updated: 2021/08/10 20:50:34 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

UNAME_S				= $(shell uname -s)

ifeq ($(UNAME_S),Linux)
	LIBS 			= -lmlx -lXext -lX11
endif
ifeq ($(UNAME_S),Darwin)
	LIBS 			= -lmlx -framework OpenGL -framework AppKit -lz
endif

keycode_tester:	
		gcc keycode_tester.c $(LIBS) -o keycode_tester

clean:
		rm -rf keycode_tester

fclean:	clean
