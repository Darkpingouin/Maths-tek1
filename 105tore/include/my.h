/*
** my.h for 105tore in /home/orset_a/rendu/Projet/Maths/105tore/include
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Jan 12 17:12:15 2015 aurelie orset
** Last update Sun Jan 18 17:06:59 2015 aurelie orset
*/

#ifndef		_MY_H_
# define	_MY_H_

typedef struct	s_equation
{
  double		o;
  double	a0;
  double	a1;
  double	a2;
  double	a3;
  double	a4;
  double	n;
  int		c;
}		t_equation;

typedef struct	s_derive
{
  double	d0;
  double	d1;
  double	d2;
  double	d3;
  double	d4;
}		t_derive;

int	checkerror(int ac, char **av);
void	newton(t_equation e);
void	affichage(t_equation e);
double	f(double x, t_equation e);
double  trunc(double x);
double	round(double x);
void	bissection(t_equation e);
void	secante(t_equation e);

#endif
