/*
** main.c for 105tore in /home/orset_a/rendu/Projet/Maths/105tore
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Jan 12 17:09:49 2015 aurelie orset
** Last update Sat Jan 17 19:22:55 2015 aurelie orset
*/

#include <stdlib.h>
#include "my.h"

int	main(int ac, char **av)
{
  t_equation	e;

  if (checkerror(ac,av) == 0)
    {
      e.o = atof(av[1]);
      e.a0 = atof(av[2]);
      e.a1 = atof(av[3]);
      e.a2 = atof(av[4]);
      e.a3 = atof(av[5]);
      e.a4 = atof(av[6]);
      e.n = atof(av[7]);
      if (ac == 9)
	e.c = atof(av[8]);
      else 
	e.c = 100;
      affichage(e);
    }
  return (0);    
}
