# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 21:16:17 by bledda            #+#    #+#              #
#    Updated: 2021/08/10 21:47:36 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= mlx_utils.a

#	FILES	####################################################################
SRC_FOLDER		= src/
HEADER_FOLDER	= header/

HEADER_FILES	= mlx_put_img_to_img.h \
					mlx_keycode.h

SRCS_FILES		= mlx_put_img_to_img.c

SRCS			= $(addprefix ${SRC_FOLDER},${SRCS_FILES})
HEADERS			= $(addprefix ${HEADER_FOLDER},${HEADER_FILES})

OBJS			= ${SRCS:.c=.o}

CC				= gcc
CFLAGS  		= -Wall -Wextra -Werror
RM				= rm -f
AR				= ar -rcs

UNAME_S			= $(shell uname -s)

ifeq ($(UNAME_S),Linux)
	LIBS 		= -lmlx -lXext -lX11
endif
ifeq ($(UNAME_S),Darwin)
	LIBS 		= -lmlx -framework OpenGL -framework AppKit -lz
endif
################################################################################

#	RULES	####################################################################
$(NAME):	${OBJS}
			@${AR} ${NAME} ${OBJS}
			@printf $(yellow)
			@printf "\n$(NAME) done.\n"
			@printf $(reset)

all:		${NAME}

%.o: %.c	$(HEADERS)
			@printf $(yellow)
			@printf "Generating mlx utils objects... %-33.33s\r" $@
			@$(CC) -c $(CFLAGS) -o $@ $<
			@printf $(reset)

clean:
			@${RM} $(OBJS)
			@printf $(yellow)
			@printf "$(NAME) -> objects is delete\n"
			@printf $(reset)

fclean:		clean
			@$(RM) $(NAME)
			@printf $(yellow)
			@printf "$(NAME) is delete\n"
			@printf $(reset)

re:			fclean all

.PHONY: 	all clean fclean re
#################################################################################

#	COLOR SETTING	#############################################################
black 				=	"[1;30m"
red 				=	"[1;31m"
green 				=	"[1;32m"
yellow 				=	"[1;33m"
blue 				=	"[1;34m"
magenta 			=	"[1;35m"
cyan 				=	"[1;36m"
white 				=	"[1;37m"

bg_black 			=	"[40m"
bg_red 				=	"[41m"
bg_green 			=	"[42m"
bg_yellow 			=	"[43m"
bg_blue 			=	"[44m"
bg_magenta 			=	"[45m"
bg_cyan 			=	"[46m"
bg_white 			=	"[47m"

reset 				=	"[0m"
#################################################################################