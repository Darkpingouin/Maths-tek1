/*
** put_pixel_to_image.c for rtv1 in /home/orset_a/rendu/Projet/MUL/MUL_2014_rtv1
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Feb  2 16:14:29 2015 aurelie orset
** Last update Fri Feb 20 19:33:56 2015 aurelie orset
*/

#include "my.h"
#include "mlx.h"

void	my_put_pixel_to_image(int x, int y, t_color color, t_mlx mlx)
{
  mlx.data[(x + (y * 720)) * mlx.bpp / 8] = color.b;
  mlx.data[(x + (y * 720)) * mlx.bpp / 8 + 1] = color.g;
  mlx.data[(x + (y * 720)) * mlx.bpp / 8 + 2] = color.r;
  mlx.data[(x + (y * 720)) * mlx.bpp / 8 + 3] = color.t;
}
