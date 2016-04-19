/*
** main.c for 104intersection in /home/orset_a/rendu/Projet/104intersection
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Dec 29 11:16:20 2014 aurelie orset
** Last update Mon Dec 29 12:14:36 2014 aurelie orset
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char	*tab_opt()
{
  char	*opt;
  opt = malloc(sizeof(char) * 3);
  if (opt == NULL)
    exit(0);
  opt[0] = '1';
  opt[1] = '2';
  opt[2] = '3';
  return (opt);
}

ptr_func *tab_func()
{
  ptr_func *func;
  func = malloc(sizeof(ptr_func) * 3);
  if (func == NULL)
    exit(0);
  func[0] = &sphere;
  func[1] = &cylindre;
  func[2] = &cone;
  return (func);
}

int	main(int ac, char **av)
{
  char *opt;
  ptr_func *func;
  int	i;

  i = 0;
  opt = tab_opt();
  func = tab_func();
  if (checkerror(ac, av) != 0)
    exit (0);
  else
    {
      while (opt[i] != av[1][0])
	i = i + 1;
      if (opt[i] == av[1][0])
	func[i](av);
      return (0);
    }
}
