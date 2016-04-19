/*
** checkerror.c for 104intersection in /home/orset_a/rendu/Projet/104intersection
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Dec 29 11:24:18 2014 aurelie orset
** Last update Fri Jan  2 09:26:43 2015 aurelie orset
*/

#include <stdio.h>
#include <stdlib.h>

int	checkerror(int ac, char **av)
{
  if (ac != 9)
    {
      printf("erreur: il faut entrer 8 arguments\n");
      return (1);
    }
  if (av[1][0] > '3' || av[1][0] == '0')
    {
      printf("erreur: les seules options acceptées sont 1, 2 ou 3\n");
      return (1);
    }
  if (av[1][0] == '3' && atoi(av[8]) > 360)
    {
      printf("erreur: l'angle doit être compris entre 0 et 360 degrès\n");
      return (1);
    }
  if (av[5][0] == '0' && av[6][0] == '0' && av[7][0] == '0')
    {
      printf("erreur: vecteur nul !\n");
      return (1);
    }
  return (0);
}
