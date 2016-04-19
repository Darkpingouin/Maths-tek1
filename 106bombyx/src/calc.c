/*
** calc.c for 106bombyx in /home/orset_a/rendu/Projet/Maths/106bombyx
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Tue Feb 10 19:38:03 2015 aurelie orset
** Last update Sun Feb 22 22:42:22 2015 aurelie orset
*/

#include <mlx.h>
#include <stdio.h>
#include "my.h"

void	calculs(float k, t_mlx mlx)
{
  float		x;
  float		y;
  int		cpt;
  t_color	color;

  x = 10;
  cpt = 10;
  color.r = 255;
  color.b = 255;
  color.g = 255;
  while (cpt <= 100)
    {
      y = k*x*(1000-x)/1000;
      printf("x = %d y = %f\n", cpt, y);
      my_put_pixel_to_image(y,cpt, color, mlx);
      x = y;
      cpt = cpt + 1;
    }
}

void	schema(float imin, float imax)
{
  float k;
  float x;
  float y;

  x = imin;
  k = 0;
  while (imin < imax)
    {
      y = k*x*((1000-x)/1000);
      printf("x = %f y = %f\n", imin, y);
      x = y;
      imin = imin + 1;
    }
}
