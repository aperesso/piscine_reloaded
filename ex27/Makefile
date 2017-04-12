# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperesso <aperesso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 16:10:38 by aperesso          #+#    #+#              #
#    Updated: 2017/03/29 20:44:20 by aperesso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = display_file.a

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra display_file.c ft_putstr.c -o ft_display_file
	gcc -c display_file.c ft_putstr.c
	ar -rc $(NAME) ft_putstr.o display_file.o
	ranlib $(NAME)

clean :
	rm -f ft_putstr.o display_file.o 

fclean : clean
	rm -f $(NAME)
