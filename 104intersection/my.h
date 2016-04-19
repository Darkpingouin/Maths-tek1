/*
** my.h for 104intersection in /home/orset_a/rendu/Projet/104intersection
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Dec 29 11:38:24 2014 aurelie orset
** Last update Wed Dec 31 15:45:19 2014 aurelie orset
*/

#ifndef		_MY_H_
# define	_MY_H_
# define	PI 3.14159265359

typedef struct	s_point
{
  double	x;
  double	y;
  double	z;
}		t_point;

typedef struct	s_vecteur
{
  double	x;
  double	y;
  double	z;
}		t_vecteur;

typedef int(*ptr_func)(char **);

int	checkerror(int ac, char **av);
int	sphere(char **av);
int	cone(char **av);
int	cylindre(char **av);
int	calcul_sphere(t_point p, t_vecteur v, int r);
int	calcul_cylindre(t_point p, t_vecteur v, int r);
int	calcul_cone(t_point p, t_vecteur v, float an);
float	powf(float x, float y);
float	tanf(float x);

#endif
