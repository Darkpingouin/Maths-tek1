/*
** init.c for wolf3d in /home/orset_a/rendu/Projet/MUL_2014_wolf3d
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Wed Dec 17 16:59:49 2014 aurelie orset
** Last update Fri Feb 20 19:39:19 2015 aurelie orset
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "mlx.h"
#include "my.h"

int     key_hook(int keycode)
{
  if (keycode == 65307)
    exit(0);
  return (0);
}

int	expose_hook(void *param)
{
  t_mlx	*mlx;

  mlx = (t_mlx*)param;
  mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img, 0, 0);
  return (0);
}

int	init(int k)
{
  t_mlx	mlx;

  mlx.mlx_ptr = mlx_init();
  if (mlx.mlx_ptr == (void *)0)
    {
      printf("error: this project can not run without any environment\n");
      exit(0);
    }
  mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, 1080, 720, "rtv1");
  if (mlx.win_ptr == (void *)0)
    return (-1);
  mlx.img = mlx_new_image(mlx.mlx_ptr, 1080, 720);
  if (mlx.img == (void *)0)
    return (-1);
  mlx.data = (unsigned char *)mlx_get_data_addr(mlx.img, &mlx.bpp,\
                                                &mlx.sizeline, &mlx.endian);
  calculs(k, mlx);
  mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img, 0, 0);
  mlx_expose_hook(mlx.win_ptr, &expose_hook, &mlx);
  mlx_key_hook(mlx.win_ptr, &key_hook, &mlx);
  mlx_loop(mlx.mlx_ptr);
  return (0);
}
