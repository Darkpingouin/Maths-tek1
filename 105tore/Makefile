##
## Makefile for 105tore in /home/orset_a/rendu/Projet/Maths/105tore
## 
## Made by aurelie orset
## Login   <orset_a@epitech.net>
## 
## Started on  Thu Jan  8 12:34:50 2015 aurelie orset
## Last update Thu Jan 15 15:36:11 2015 aurelie orset
##

SRC= 	main.c\
	affichage.c\
	calculs.c\
	newton.c\
	checkerror.c

NAME= 105tore

OBJ= $(SRC:.c=.o)

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -I. -I./include

CC= cc

RM= rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -lmlx -lXext -lX11 -lm 

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
