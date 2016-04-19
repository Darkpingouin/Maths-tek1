/*
** check.c for 103architecte in /home/orset_a/rendu/Projet/maths103
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Sun Dec 14 10:41:40 2014 aurelie orset
** Last update Sun Dec 14 17:29:27 2014 aurelie orset
*/

#include <stdio.h>
#include <math.h>
#include "include/my.h"

double	*check_options(double *nbr, double *mat, int ac, char **av)
{
  int	i;

  i = 3;
  while (i < ac)
    {
      if (av[i][0] == 'T' && av[i][1] == '\0')
	{
	  trans(&nbr[0], &mat[0], av, i);
	  i = i + 3;
	}
      else if (av[i][0] == 'H' && av[i][1] == '\0')
	{
	  homo(&nbr[0], &mat[0], av, i);
	  i = i + 3;
	}
      else if (av[i][0] == 'R' && av[i][1] == '\0')
	{
	  rot(&nbr[0], &mat[0], av, i);
	  i = i + 2;
	  /*if (av[5][0] != '\0')
	    {
	      printf("Error: for option R only 1 number after option should be entered\n");
	      exit (0);
	      }*/
	}
      else if (av[i][0] == 'S' && av[i][1] == '\0')
	{
	  sym(&nbr[0], &mat[0], av, i);
	  i = i + 2;
	  
	  /*if (av[5][0] != '\0')
	    {
	      printf("Error: for option S only 1 number after option should be entered\n");
	      exit (0);
	      }*/
	}
      else
	{
	  printf("Error: options are T, H, R or S\n");
	  exit (0);
	}
    }
  return (nbr);
}

int	check_error(int ac, char **av)
{
  int	i;

  i = 1;
  if (ac < 5)
    {
      printf("Error: at least 4 arguments expected\n");
      return (0);
    }
  if (my_str_isnum(av[1]) == 0 || my_str_isnum(av[2]) == 0)
    {
      printf("Error: %s and %s should be numbers\n", av[1], av[2]);
      return (0);
    }
  while (i < ac)
    {
      if (av[i][0] == 'R' || av[i][0] == 'S')
	{
	  i = i + 1;
	  if (my_str_isnum(av[i]) == 0)
	    {
	      printf("Error: %s should  be a number\n", av[i]);
	      return (0);
	    }
	}
      else if (av[i][0] == 'T' || av[i][0] == 'H')
	{
	  i = i + 1;
	  if (my_str_isnum(av[i]) == 0 || my_str_isnum(av[i + 1]) == 0)
	    {
	      printf("Error : %s and %s should be numbers\n", av[i], av[i + 1]);
	      return (0);
	    }
	}
      else
	i = i + 1;
    }
  return (1);
}
