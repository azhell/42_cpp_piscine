# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 12:09:46 by yalytvyn          #+#    #+#              #
#    Updated: 2019/09/30 12:09:48 by yalytvyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= phonebook

SRC		= Contact.Class.cpp \
		  main.cpp

FLAG	= clang++ -Wall -Wextra -Werror

OBJ		= $(SRC:.cpp=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	$(FLAG) $(OBJ) -o $(NAME)
	printf '\033[32m[ ✔ ] %s\n\033[0m' "Create phonebook"

clean:
	/bin/rm -rf *.o
	printf '\033[31m[ ✔ ] %s\n\033[0m' "Clean"

fclean: clean
	/bin/rm -f $(NAME)
	printf '\033[31m[ ✔ ] %s\n\033[0m' "Fclean"

re: fclean all
