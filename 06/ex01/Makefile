# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 18:07:24 by yalytvyn          #+#    #+#              #
#    Updated: 2019/10/10 18:07:26 by yalytvyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= serialize

SRC		= *.cpp 

FLAG	= clang++ -Wall -Wextra

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

