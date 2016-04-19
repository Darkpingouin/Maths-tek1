##
## Makefile for Pushswap in /home/orset_a/rendu/Projet/CPE_2014_Pushswap
## 
## Made by aurelie orset
## Login   <orset_a@epitech.net>
## 
## Started on  Fri Dec 12 12:25:26 2014 aurelie orset
## Last update Sun Dec 14 17:20:56 2014 aurelie orset
##

SRC =	matrice.c\
	check.c\
	my_getnbr.c\
	my_str_isnum.c\
	option.c\
	main.c

OBJ = $(SRC:.c=.o)

RM= rm -f

CC= cc -o

CFLAGS += -I.

NAME= 103architecte

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(NAME) $(OBJ) -lmy -L./lib -lm
	@echo -e "\033[1;34mDDDDDDDDDDDDD"
	@echo 'D::::::::::::DDD'	
	@echo 'D:::::::::::::::DD'
	@echo 'DDD:::::DDDDD:::::D'
	@echo ' D:::::D    D:::::D    ooooooooooo   nnnn  nnnnnnnn        eeeeeeeeeeee'
	@echo ' D:::::D     D:::::D oo:::::::::::oo n:::nn::::::::nn    ee::::::::::::ee'
	@echo ' D:::::D     D:::::Do:::::::::::::::on::::::::::::::nn  e::::::eeeee:::::ee'
	@echo ' D:::::D     D:::::Do:::::ooooo:::::onn:::::::::::::::ne::::::e     e:::::e'
	@echo ' D:::::D     D:::::Do::::o     o::::o  n:::::nnnn:::::ne:::::::eeeee::::::e'
	@echo ' D:::::D     D:::::Do::::o     o::::o  n::::n    n::::ne:::::::::::::::::e'
	@echo ' D:::::D     D:::::Do::::o     o::::o  n::::n    n::::ne::::::eeeeeeeeeee'
	@echo ' D:::::D    D:::::D o::::o     o::::o  n::::n    n::::ne:::::::e'
	@echo 'DDD:::::DDDDD:::::D o:::::ooooo:::::o  n::::n    n::::ne::::::::e'
	@echo 'D:::::::::::::::DD  o:::::::::::::::o  n::::n    n::::n e::::::::eeeeeeee'
	@echo 'D::::::::::::DDD     oo:::::::::::oo   n::::n    n::::n  ee:::::::::::::e'
	@echo -e "DDDDDDDDDDDDD          ooooooooooo     nnnnnn    nnnnnn    eeeeeeeeeeeeee\033[0m"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
