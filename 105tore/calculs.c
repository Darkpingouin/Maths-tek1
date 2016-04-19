/*
** calculs.c for 105tore in /home/orset_a/rendu/Projet/Maths/105tore
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Wed Jan 14 14:07:07 2015 aurelie orset
** Last update Sun Jan 18 17:42:05 2015 aurelie orset
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

double	f(double x, t_equation e)
{
  double	x0;
  double	x1;
  double	x2;
  double	x3;
  double	x4;

  x4 = e.a4*(pow(x,4));
  x3 = e.a3*(pow(x,3));
  x2 = e.a2*(pow(x,2));
  x1 = e.a1*(pow(x,1));
  x0 = e.a0;
  x = x4 + x3 + x2 + x1 + x0;
  return (x);
}

void	bissection(t_equation e)
{
  double	p1;
  double	p2;
  double	xm;
  double	a;
  int		i;
  double	E;

  i = 1;
  p1 = 0;
  p2 = 1;
  xm = ((p1 + p2) / 2);
  a = 0;
  E = 1; 
  printf("point initial 1 : %g\n", p1); 
  printf("point initial 2 : %g\n", p2); 
  while (i < e.c)
    {
      if (a != E)
	{
	  xm = (p1 + p2) / 2;
	  if ((f(p1, e) * f(xm, e)) < 0)
	    p2 = xm;
	  else
	    p1 = xm;
	  printf("itération %d\tx = %.20g\n", i, xm);
	  i = i + 1;
	  a = round(p1 * pow(10, e.n));
	  E = round(p2 * pow(10, e.n));
	}
      else 
	{
	  xm = f(xm, e);
	  printf("fx = %.1e\n", xm);
	  exit (0);
	}
    }
  printf("nombre maximum d'itérations dépassé\n");
  xm = f(xm, e);
  printf("fx = %.1e\n", xm);
}

void	secante(t_equation e)
{
  double	x0;
  double	x1;
  double	xn;
  double	a;
  double	E;
  int		i;

  i = 1;
  x0 = 0.4;
  x1 = 0.8;
  xn = x1 - ((f(x1,e)*(x1 - x0))/(f(x1,e)-f(x0,e)));
  a = 0;
  E = 1;
  printf("point initial 1 : %g\n", x0); 
  printf("point initial 2 : %g\n", x1); 
  while (i < e.c)
    {
      if (a == E)
	{
	  xn = f(xn, e);
	  printf("fx = %.1e\n", x1);
	  exit (0);
	}
      while (a != E)
	{     
	  xn = x1 - ((f(x1,e)*(x1 - x0))/(f(x1,e)-f(x0,e)));
	  printf("itération %d\tx = %.20g\n", i, xn);
	  i = i + 1;
	  x0 = x1;
	  x1 = xn;      
	  a = round(x0 * pow(10, e.n));
	  E = round(x1 * pow(10, e.n));
	}
    }
  xn = f(xn, e);
  printf("nombre maximum d'itérations dépassé\n");
  printf("fx = %.1e\n", xn);
}
