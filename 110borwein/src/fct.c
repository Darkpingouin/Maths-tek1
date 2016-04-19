/*
** fct.c for 110 in /home/orset_a/rendu/Projet/Maths/110borwein
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Wed Apr 15 16:38:22 2015 aurelie orset
** Last update Sun Apr 19 17:46:12 2015 aurelie orset
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	my_puterror(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      write(2, &str[i], 1);
      i = i + 1;
    }
  return (-1);
}

void	is_nbr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  my_puterror("\033[31merreur: merci d'entrer des \033[1;31m");;
	  exit(my_puterror("nombres positifs\033[0;31m uniquement\n\033[0m"));
	}
      else
	i++;
    }
}

int	checkerror(int ac, char **av)
{
  int	cpt;

  cpt = 1;
  if (ac < 2 || ac > 5)
    {
      my_puterror("\033[32mutilisation: ./110borwein n [a b] [s]\n");
      my_puterror("a and b: bornes de l'intervalle (par défaut 0 et 5000)\n");
      my_puterror("s: nombre de subdivisions de l'intervalle d'intégration");
      return (my_puterror(" (par défaut 10000)\n\033[0m"));
    }
  else if (ac == 4 || ac == 5)
    {
      if (atof(av[2]) > atof(av[3]))
	{
	  my_puterror("\033[31merreur: a doit être strictement inférieur à b");
	  return (my_puterror(" (a < b)\n\033[0m"));
	}
    }
  while (cpt < ac)
    {
      is_nbr(av[cpt]);
      cpt ++;
    }
  return (0);
}
