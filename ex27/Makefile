# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: britela- <britela-@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/13 18:50:03 by britela-          #+#    #+#              #
#    Updated: 2025/04/13 19:08:31 by britela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

SRC = ft_display_file.c
OBJ = ft_display_file.o

RM = rm -rf

all: ${NAME}

#creation d'objer pour l'executable
${NAME}: ${OBJ}
	${CC} -o ${NAME} ${OBJ}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
#suppresion et recreation de l'executable
re: fclean all

.PHONY:		clean fclean re all
