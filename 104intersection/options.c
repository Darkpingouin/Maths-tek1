/*
** options.c for 104intersection in /home/orset_a/rendu/Projet/104intersection
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Dec 29 11:41:12 2014 aurelie orset
** Last update Mon Dec 29 19:56:29 2014 aurelie orset
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int     sphere(char **av)
{
  t_point	p;
  t_vecteur	v;
  int		r;

  p.x = atoi(av[2]);
  p.y = atoi(av[3]);
  p.z = atoi(av[4]);
  v.x = atoi(av[5]);
  v.y = atoi(av[6]);
  v.z = atoi(av[7]);
  r = atoi(av[8]);

  printf("sphère de rayon %d\n", r);
  printf("droite passant par le point (%.f,%.f,%.f),", p.x, p.y, p.z);
  printf(" de vecteur directeur (%.f,%.f,%.f)\n", v.x, v.y, v.z);
  calcul_sphere(p, v, r);
  return (0);
}

int     cylindre(char **av)
{
  t_point	p;
  t_vecteur	v;
  int		r;

  p.x = atoi(av[2]);
  p.y = atoi(av[3]);
  p.z = atoi(av[4]);
  v.x = atoi(av[5]);
  v.y = atoi(av[6]);
  v.z = atoi(av[7]);
  r = atoi(av[8]);

  printf("cylindre de rayon %d\n", r);
  printf("droite passant par le point (%.f,%.f,%.f),", p.x, p.y, p.z);
  printf(" de vecteur directeur (%.f,%.f,%.f)\n", v.x, v.y, v.z);
  calcul_cylindre(p, v, r);
  return (0);
}

int     cone(char **av)
{
  t_point	p;
  t_vecteur	v;
  float		an;

  p.x = atoi(av[2]);
  p.y = atoi(av[3]);
  p.z = atoi(av[4]);
  v.x = atoi(av[5]);
  v.y = atoi(av[6]);
  v.z = atoi(av[7]);
  an = atoi(av[8]);
  printf("cône d'angle %.f degrés\n", an);
  printf("droite passant par le point (%.f,%.f,%.f),", p.x, p.y, p.z);
  printf(" de vecteur directeur (%.f,%.f,%.f)\n", v.x, v.y, v.z);
  calcul_cone(p, v, an);
  return (0);
}

