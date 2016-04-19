/*
** calculs.c for 104intersection in /home/orset_a/rendu/Projet/104intersection
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Dec 29 12:55:28 2014 aurelie orset
** Last update Mon Dec 29 20:21:45 2014 aurelie orset
*/

#include <math.h>
#include <stdio.h>
#include "my.h"

int	calcul_sphere(t_point p, t_vecteur v, int r)
{
  int		i;
  float		a;
  float		b;
  float		c;
  float		x1;
  float		x2;
  float		delta;
  t_point	p1;
  t_point	p2;

  b = ((2 * v.x * p.x) + (2 * v.y * p.y) + (2 * v.z * p.z));
  a = (powf(v.x, 2) + powf(v.y, 2) + powf(v.z, 2));
  c = (powf(p.x, 2) + powf(p.y, 2) + powf(p.z, 2) - powf(r, 2));
  delta = powf(b, 2) - (4 * a * c);

  if (delta < 0)
    i = 0;
  else if (delta == 0)
    {
      i = 1;
      x1 = -(b/(2*a));
      p1.x = p.x + (x1 * v.x);
      p1.y = p.y + (x1 * v.y);
      p1.z = p.z + (x1 * v.z);
    }
  else if (delta > 0)
    {
      i = 2;
      x1 = (-b - sqrt(delta))/(2 * a);
      x2 = (-b + sqrt(delta))/(2 * a);
      p1.x = p.x + (x1 * v.x);
      p1.y = p.y + (x1 * v.y);
      p1.z = p.z + (x1 * v.z);
      p2.x = p.x + (x2 * v.x);
      p2.y = p.y + (x2 * v.y);
      p2.z = p.z + (x2 * v.z);
    }
  printf("nombre de points d'intersection : %d\n", i);
  if (i > 0)
    printf("point 1 : (%.3f, %.3f, %.3f)\n", p1.x, p1.y, p1.z);
  if (i > 1)
    printf("point 2 : (%.3f, %.3f, %.3f)\n", p2.x, p2.y, p2.z);
  return (0);
}

int	calcul_cylindre(t_point p, t_vecteur v, int r)
{
  int		i;
  float		a;
  float		b;
  float		c;
  float		x1;
  float		x2;
  float		delta;
  t_point	p1;
  t_point	p2;

  b = ((2 * v.x * p.x) + (2 * v.y * p.y));
  a = (powf(v.x, 2) + powf(v.y, 2));
  c = (powf(p.x, 2) + powf(p.y, 2) - powf(r, 2));
  delta = powf(b, 2) - (4 * a * c);

  if (delta < 0)
    i = 0;
  else if (delta == 0)
    {
      i = 1;
      x1 = -(b/(2*a));
      p1.x = p.x + (x1 * v.x);
      p1.y = p.y + (x1 * v.y);
      p1.z = p.z + (x1 * v.z);
    }
  else if (delta > 0)
    {
      i = 2;
      x1 = (-b - sqrt(delta))/(2 * a);
      x2 = (-b + sqrt(delta))/(2 * a);
      p1.x = p.x + (x1 * v.x);
      p1.y = p.y + (x1 * v.y);
      p1.z = p.z + (x1 * v.z);
      p2.x = p.x + (x2 * v.x);
      p2.y = p.y + (x2 * v.y);
      p2.z = p.z + (x2 * v.z);
    }
  printf("nombre de points d'intersection : %d\n", i);
  if (i > 0)
    printf("point 1 : (%.3f, %.3f, %.3f)\n", p1.x, p1.y, p1.z);
  if (i > 1)
    printf("point 2 : (%.3f, %.3f, %.3f)\n", p2.x, p2.y, p2.z);
  return (0);
}

int	calcul_cone(t_point p, t_vecteur v, float an)
{
  int		i;
  float		a;
  float		b;
  float		c;
  float		tg;
  float		x1;
  float		x2;
  float		delta;
  t_point	p1;
  t_point	p2;

  an = ((an * 2 * PI) / 360);
  tg = tan(an);
  b = ((2 * v.x * p.x) + (2 * v.y * p.y) - ((2 * v.z * p.z) / powf(tg, 2)));
  a = (powf(v.x, 2) + powf(v.y, 2) - (powf(v.z, 2) / powf(tg, 2)));
  c = (powf(p.x, 2) + powf(p.y, 2) - (powf(p.z, 2) / powf(tg, 2)));
  delta = powf(b, 2) - (4 * a * c);

  if (delta < 0)
    i = 0;
  else if (delta == 0)
    {
      i = 1;
      x1 = -(b/(2*a));
      p1.x = p.x + (x1 * v.x);
      p1.y = p.y + (x1 * v.y);
      p1.z = p.z + (x1 * v.z);
    }
  else if (delta > 0)
    {
      i = 2;
      x1 = (-b - sqrt(delta))/(2 * a);
      x2 = (-b + sqrt(delta))/(2 * a);
      p1.x = p.x + (x1 * v.x);
      p1.y = p.y + (x1 * v.y);
      p1.z = p.z + (x1 * v.z);
      p2.x = p.x + (x2 * v.x);
      p2.y = p.y + (x2 * v.y);
      p2.z = p.z + (x2 * v.z);
    }
  printf("nombre de points d'intersection : %d\n", i);
  if (i > 0)
    printf("point 1 : (%.3f, %.3f, %.3f)\n", p1.x, p1.y, p1.z);
  if (i > 1)
    printf("point 2 : (%.3f, %.3f, %.3f)\n", p2.x, p2.y, p2.z);
  return (0);
}
