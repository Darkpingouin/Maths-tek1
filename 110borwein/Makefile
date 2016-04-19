##
## Makefile for 110 in /home/orset_a/rendu/Projet/Maths/110borwein
## 
## Made by aurelie orset
## Login   <orset_a@epitech.net>
## 
## Started on  Sun Apr 19 14:22:03 2015 aurelie orset
## Last update Sun Apr 19 17:34:36 2015 aurelie orset
##

SRC= 	src/main.c\
	src/calc.c\
	src/fct.c

NAME= 110borwein

OBJ= $(SRC:.c=.o)

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -I. -I./include

CC= cc

RM= rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -lm
		@cat src/name
clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

ok	:	re
		@rm -f $(OBJ)
