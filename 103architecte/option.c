/*
** mat_calc.c for 103architecte in /home/orset_a/rendu/Projet/maths103
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Sun Dec 14 10:44:53 2014 aurelie orset
** Last update Sun Dec 14 12:21:27 2014 aurelie orset
*/

#include <stdio.h>
#include <math.h>
#include "include/my.h"

double		*trans(double *res, double *mat, char **av, int i)
{
  double	Tx;
  double	Ty;

  Tx = my_getnbr(av[i + 1]);
  Ty = my_getnbr(av[i + 2]);
  mat[2] = mat[2] + Tx;
  mat[5] = mat[5] + Ty;
  printf("translation de vecteur (%.0f, %.0f)\n", Tx, Ty);
  res[0] = res[0] + Tx;
  res[1] = res[1] + Ty;
  return (res);
}

double		*homo(double *res, double *mat, char **av, int i)
{
  double	Hx;
  double	Hy;

  Hx = my_getnbr(av[i + 1]);
  Hy = my_getnbr(av[i + 2]);
  mat[0] = mat[0] * Hx;
  mat[1] = mat[1] * Hx;
  mat[2] = mat[2] * Hx;
  mat[3] = mat[3] * Hy;
  mat[4] = mat[4] * Hy;
  mat[5] = mat[5] * Hy;
  printf("homothétie de rapports %.0f et %.0f\n", Hx, Hy);
  res[0] = res[0] * Hx;
  res[1] = res[1] * Hy;
  return (res);
}

double		*rot(double *res, double *mat, char **av, int i)
{
  double	matrice_rotation[9];
  double	a;
  double	Rx;
  double	Ry;
  double	stock;

  a = my_getnbr(av[i + 1]);
  a = (a * M_PI) / 180;
  Rx = cos(a);
  Ry = sin(a);
  rotation(&matrice_rotation[0], Rx, Ry);
  matrice_mul(&mat[0], &matrice_rotation[0]);
  printf("rotation d'angle %s degrés\n", av[i + 1]);
  stock = res[0];
  res[0] = stock * matrice_rotation[0] + res[1] * matrice_rotation[1];
  res[1] = stock * matrice_rotation[3] + res[1] * matrice_rotation[4];
  return (res);
}

double		*sym(double *res, double *mat, char **av, int i)
{
  double	matrice_symetrie[9];
  double	a;
  double	Sx;
  double	Sy;
  double	stock;

  a = my_getnbr(av[i + 1]);
  a = (a * M_PI) / 180;
  Sx = cos(2 * a);
  Sy = sin(2 * a);
  symetrie(&matrice_symetrie[0], Sx, Sy);
  matrice_mul(&mat[0], &matrice_symetrie[0]);
  printf("symétrie par rapport à un axe incliné de %s degrés\n", av[i + 1]);
  stock = res[0];
  res[0] = stock * matrice_symetrie[0] + res[1] * matrice_symetrie[1];
  res[1] = stock * matrice_symetrie[3] + res[1] * matrice_symetrie[4];
  return (res);
}
