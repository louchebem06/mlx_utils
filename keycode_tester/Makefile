# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 20:46:46 by bledda            #+#    #+#              #
#    Updated: 2021/08/11 14:23:40 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= keycode_tester

HEADER_MLX 			= mlx.h
SEARCH_MLX			= $(shell ls /usr/local/include | grep $(HEADER_MLX))

UNAME_S				= $(shell uname -s)

ifeq ($(UNAME_S),Linux)
	LIBS 			= -lmlx -lXext -lX11
	OS 				= linux
endif
ifeq ($(UNAME_S),Darwin)
	LIBS 			= -lmlx -framework OpenGL -framework AppKit -lz
	OS 				= mac
endif

mlx:
ifeq 			($(SEARCH_MLX),$(HEADER_MLX))
				@$(MAKE) --no-print-directory $(NAME)
else
				@printf $(yellow)
				@printf "Please install minilibx\n"
ifeq ($(UNAME_S),Linux)
				@printf "https://github.com/42Paris/minilibx-linux\n"
endif
				@printf $(reset)
endif

$(NAME):	
		gcc $(NAME).c $(LIBS) -o $(OS)_$(NAME)

clean:
		rm -rf $(OS)_$(NAME)

fclean:	$(NAME) clean
