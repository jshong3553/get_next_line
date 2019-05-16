# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinhong <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 15:10:18 by jinhong           #+#    #+#              #
#    Updated: 2019/05/04 15:39:05 by jinhong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

HEAD = ./includes

OBJ = *.o

all : $(NAME)

$(NAME):
	@echo "Compiling .."
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEAD) && ar rc $(NAME) $(OBJ)
	@echo "Done !"

clean:
	@echo "Remove .o  ..."
	@/bin/rm -f $(OBJ)
	@echo "Done !"

fclean: clean
	@echo "Remove lib ..."
	@/bin/rm -f $(NAME)
	@echo "Done !"

re: fclean all
