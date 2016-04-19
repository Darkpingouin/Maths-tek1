/*
** checkerror.c for 105tore in /home/orset_a/rendu/Projet/Maths/105tore
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Thu Jan  8 12:34:19 2015 aurelie orset
** Last update Thu Jan 15 17:43:00 2015 aurelie orset
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	checkerror(int ac, char **av)
{
  if (ac < 8 || ac > 9)
    {
      printf("erreur: il faut entrer 8 arguments minimum et 9 si vous voulez choisir le nombre d'itérations maximum\n");
      return (1);
    }
  if (av[1][0] > '3' || av[1][0] == '0')
    {
      printf("erreur: les seules options acceptées sont 1, 2 ou 3\n");
      return (1);
    }
  if (atoi(av[7]) <= 0)
    {
      printf("erreur: n doit être positif ou différent de 0\n");
      return (1);
    }
  if ((atoi(av[2]) + atoi(av[3]) + atoi(av[4]) + atoi(av[5]) + atoi(av[6])) == 0)
    {
      printf("erreur: l'equation doit avoir au moins une valeur différente de 0\n");
      return (1);
    }
  return (0);
}
