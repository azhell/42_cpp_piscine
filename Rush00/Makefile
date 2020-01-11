# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/05 10:54:16 by yalytvyn          #+#    #+#              #
#    Updated: 2019/10/05 10:54:18 by yalytvyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_retro

SRC		= main.cpp \
			game.cpp \
			Bullet.Class.cpp \
			Player.Class.cpp \
			Enemy.Class.cpp \
			Backgrd.Class.cpp \
			GameController.Class.print.cpp \
			GameController.Class.cpp \
			Asteroid.class.cpp

FLAG	= clang++ -Wall -Wextra -Werror -lncurses

OBJ		= $(SRC:obj/.cpp=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	$(FLAG) $(OBJ) -o $(NAME)
	printf '\033[32m[ ✔ ] %s\n\033[0m' "Create " $(NAME)

clean:
	/bin/rm -rf *.o
	printf '\033[31m[ ✔ ] %s\n\033[0m' "Clean"

fclean: clean
	/bin/rm -f $(NAME)
	printf '\033[31m[ ✔ ] %s\n\033[0m' "Fclean"

re: fclean all
