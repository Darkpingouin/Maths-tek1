/*
** newton.c for  in /home/thoma_p/Projet/105tore
** 
** Made by Pierre-Olivier Thomas
** Login   <thoma_p@epitech.net>
** 
** Started on  Wed Jan 14 14:18:34 2015 Pierre-Olivier Thomas
** Last update Thu Jan 15 17:45:07 2015 aurelie orset
*/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "my.h"

void		newton(t_equation e)
{
  t_derive	d;
  double	fx;
  double	fxd;
  double	xn;
  double       	xn1;
  double	a;
  double	E;
  int		cpt;

  a = 0;
  E = 1;
  cpt = 1;;
  xn = 0.5;
  d.d0 = e.a0 * 0;
  d.d1 = e.a1 * 1;
  d.d2 = e.a2 * 2;
  d.d3 = e.a3 * 3;
  d.d4 = e.a4 * 4;
  printf("point initial : %g\n", xn);
  while (cpt < e.c)
    {
      fx = f(xn,e);
      fxd = (d.d4 * pow(xn, 3)) + (d.d3 * pow(xn, 2)) + d.d2 * xn + d.d1; 
      xn1 = (xn - fx / fxd); 
      a = round(xn * pow(10, e.n));
      E = round(xn1 * pow(10, e.n));
      if (a != E)
	{
	  printf("itération %d	x = %.20g\n", cpt, xn1);
	  xn = xn1;
	}
      else 
	{
	  xn1 = f(xn, e);
	  printf("fx = %.1e\n", xn1);
	  exit(2);
	}
      cpt = cpt + 1;
    }
  printf("nombre maximum d'itérations dépassé\n");
  xn1 = f(xn1, e);
  printf("fx = %.1e\n", xn1);
}
