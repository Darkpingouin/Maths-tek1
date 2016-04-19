/*
** affichage.c for 105tore in /home/orset_a/rendu/Projet/Maths/105tore
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Jan 12 17:58:33 2015 aurelie orset
** Last update Thu Jan 15 16:09:22 2015 aurelie orset
*/

#include <stdio.h>
#include "my.h"

void	affichage(t_equation e)
{
  if (e.a4 != 0 && e.a4 != 1)
    printf("%.fx⁴", e.a4);
  else if (e.a4 == 1)
    printf("x⁴");
  if (e.a3 > 1)
    printf("+%.fx³", e.a3);
  else  if (e.a3 < 0)
    printf("%.fx³", e.a3);
  else if (e.a3 == 1)
    printf("+x³");
  if (e.a2 > 1)
    printf("+%.fx²", e.a2);
  else if (e.a2 < 0)
    printf("%.fx²", e.a2);
  else if (e.a2 == 1)
    printf("+x²");
  if (e.a1 > 1)
    printf("+%.fx", e.a1);
  else if (e.a1 < 0)
    printf("%.fx", e.a1);
  else if (e.a1 == 1)
    printf("+x");
  if (e.a0 > 1)
    printf("+%.f", e.a0);
  else if (e.a0 < 0)
    printf("%.f", e.a0);
  printf(" = 0\n");
  if (e.o == 1)
    {
      printf("methode de la bissection\n");
      bissection(e);
    }
  else if (e.o == 2)
    {
      printf("methode de Newton\n");
      newton(e);
    }
  else
    {
      printf("methode de la sécante\n");
      secante(e);
    }
}
