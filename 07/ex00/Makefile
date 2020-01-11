# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 19:26:38 by yalytvyn          #+#    #+#              #
#    Updated: 2019/10/10 19:26:39 by yalytvyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= whatever

SRC		= *.cpp

FLAG	= clang++ -Wall -Wextra -Werror

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
