# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 13:56:55 by ilantone          #+#    #+#              #
#    Updated: 2019/10/23 14:55:00 by ilantone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=*.c

OBJECTS=*.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
