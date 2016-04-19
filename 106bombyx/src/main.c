/*
** main.c for 106bombyx in /home/orset_a/rendu/Projet/Maths/106bombyx
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Feb  9 16:29:06 2015 aurelie orset
** Last update Fri Feb 20 19:40:46 2015 aurelie orset
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	main(int ac, char **av)
{
  checkerror(ac, av);
  if (ac == 2)
    init(atof(av[1]));
  else
    schema(atof(av[1]), atof(av[2]));
  return (0);
}
