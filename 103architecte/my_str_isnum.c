/*
** my_str_isnum.c for lib in /home/orset_a/rendu/Projet/maths103
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Sun Dec 14 10:46:12 2014 aurelie orset
** Last update Sun Dec 14 17:00:12 2014 aurelie orset
*/

#include <stdlib.h>
#include <math.h>
#include "include/my.h"

int     my_str_isnum(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '-')
	i = i + 1;
      if (str[i] >= '0' && str[i] <= '9')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
