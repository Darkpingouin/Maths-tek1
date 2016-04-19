/*
** main.c for 103architecte in /home/orset_a/rendu/Projet/maths103
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Sun Dec 14 10:44:05 2014 aurelie orset
** Last update Sun Dec 14 17:14:34 2014 aurelie orset
*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

int	main(int ac, char **av)
{
  int	e;

  double	nbr[3];
  double	mat[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};  

  e = check_error(ac, av);
  if (e != 0)
  {
    nbr[0] = atoi(av[1]);
    nbr[1] = atoi(av[2]);
    nbr[2] = 1;
    check_options(nbr, mat, ac, av);
    affichage(mat);
    printf("(%s, %s) => (%.3f, %.3f)\n", av[1], av[2], nbr[0], nbr[1]);
  }
  else
    exit (0);
  return (0);
}
