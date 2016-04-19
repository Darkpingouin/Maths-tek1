##
## Makefile for tp1 in /home/orset_a/rendu/MinilibX/TP1
## 
## Made by aurelie orset
## Login   <orset_a@epitech.net>
## 
## Started on  Mon Oct 27 14:26:44 2014 aurelie orset
## Last update Sat Jan  3 14:55:29 2015 aurelie orset
##

SRC= 	main.c\
	options.c\
	calculs.c\
	checkerror.c

NAME= 104intersection

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
