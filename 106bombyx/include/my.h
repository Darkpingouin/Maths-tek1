/*
** my.h for 106bombyx in /home/orset_a/rendu/Projet/Maths/106bombyx
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Feb  9 16:40:46 2015 aurelie orset
** Last update Fri Feb 20 19:32:16 2015 aurelie orset
*/

#ifndef		_MY_H_
# define	_MY_H_

typedef struct  s_mlx
{
  void          *mlx_ptr;
  void          *win_ptr;
  void          *img;
  void          *imgmap;
  unsigned char *data;
  int           sizeline;
  int           endian;
  int           bpp;
}               t_mlx;

typedef struct  s_color
{
  unsigned char b;
  unsigned char g;
  unsigned char r;
  unsigned char t;
}               t_color;

int	checkerror(int ac, char **av);
void	my_put_pixel_to_image(int x, int y, t_color color, t_mlx mlx);
int	init(int k);
int	is_num(char *str);
int	my_perror(char *str);
void	calculs(float f, t_mlx mlx);
void	schema(float a, float b);

#endif
