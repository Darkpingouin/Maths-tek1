/*
** checkerror.c for  in /home/orset_a/rendu/Projet/Maths/106bombyx
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Feb  9 16:30:04 2015 aurelie orset
** Last update Fri Feb 20 19:40:59 2015 aurelie orset
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    my_perror(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      write (2, &str[i], 1);
      i = i + 1;
    }
  exit(0);
}

int	is_numb(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if ((str[i] >= '0' && str[i] <= '9') || str[i] == '.')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}

int	checkerror(int ac, char **av)
{
  if (ac < 2 || ac > 3)
    {
      my_perror("\033[1;31merreur : trop/pas assez d'arguments\nvous devez entrer k ou (i min et i max)\n\033[0m");
    }
  else
    {
      if (is_numb(av[1]) != 1)
	my_perror("\033[1;31merreur : veuillez entrer un nombre !\n\033[0m");
      if (ac == 3)
	{
	 if (is_numb(av[2]) != 1)
	    my_perror("\033[1;31merreur : veuillez entrer un nombre !\n\033[0m");
	 else if (atof(av[1]) >= atof(av[2]))
	   my_perror("\033[1;31merreur : i min doit etre strictement inférieur à i max\n\033[0m");
	}
      else
	{
	  if (atof(av[1]) < 1 || atof(av[1]) > 4)
	    my_perror("\033[1;31merreur : k doit être compris entre 1 et 4 !\n\033[0m");
	}
    }
  return (0);
}

