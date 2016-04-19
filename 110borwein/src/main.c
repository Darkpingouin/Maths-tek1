/*
** 110borwein.c for 110 in /home/orset_a/rendu/Projet/Maths/110borwein
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Wed Apr 15 15:48:50 2015 aurelie orset
** Last update Sun Apr 19 17:16:32 2015 aurelie orset
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	main(int ac, char **av)
{
  double	a;
  double	b;
  double	s;

  a = 0;
  b = 5000;
  s = 10000;
  if (checkerror(ac, av) == 0)
    {
      if (ac == 3 || ac == 5)
	{
	  if (ac == 3)
	    s = atof(av[2]);
	  else
	    s = atof(av[4]);
	}
      if (ac == 4 || ac == 5)
	{
	  a = atof(av[2]);
	  b = atof(av[3]);
	}
      calc(atof(av[1]), a, b, s);
    }
  return (0);
}
