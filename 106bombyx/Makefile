##
## Makefile for 106bombyx in /home/orset_a/rendu/Projet/Maths/106bombyx
## 
## Made by aurelie orset
## Login   <orset_a@epitech.net>
## 
## Started on  Mon Feb  9 15:29:39 2015 aurelie orset
## Last update Wed Feb 11 15:24:23 2015 aurelie orset
##

SRC = 	src/main.c\
	src/calc.c\
	src/init.c\
	src/put_pixel_to_image.c\
	src/checkerror.c

OBJ = $(SRC:.c=.o)

RM= rm -f

CC= cc -o

CFLAGS += -Wextra -Wall -Werror 
CFLAGS += -ansi -pedantic
CFLAGS += -I. -I./include -I./src

LDFLAGS = -lm -lmlx -lX11 -lXext

NAME= 106bombyx

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(NAME) $(OBJ) $(LDFLAGS)
	@./src/projectname
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
