# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: britela- <britela-@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 20:00:45 by britela-          #+#    #+#              #
#    Updated: 2025/04/10 23:07:33 by britela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o
#OBJ = $(SRC:.c=.o)

INCS = includes
RM = rm -rf
LIB = ar rcs #creation de librairie

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@

#Nettoyage des fichiers objet
clean:
	$(RM) $(OBJ) #supprimer tout les ficher .0 dans OBJ

#Nettoyage total 
fclean: clean
	$(RM) $(NAME) #supprime les .o et libft.a(pour une recompilation propre )

re: fclean all #recompile tout a zero 

.PHONY: all clean fclean re
