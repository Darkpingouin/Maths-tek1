/*
** calc.c for 110 in /home/orset_a/rendu/Projet/Maths/110borwein
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Wed Apr 15 16:39:06 2015 aurelie orset
** Last update Wed Apr 22 13:57:07 2015 aurelie orset
*/

#include <math.h>
#include <stdio.h>

double	diff(double d)
{
  return (d - 1.57079632679489661923);
}

double	fx(double n, double x)
{
  double	res;
  double	k;

  k = 0;
  res = 1;
  while (k <= n)
    {
      if (x != 0)
	res = res * (sin(x/((2*k) + 1))/ (x/((2*k) + 1)));
      k = k + 1;
    }
  return (res);
}
void	rectangle(double n, double a, double b, double s)
{
  double	h;
  double	i;
  double	re;

  i = 0;
  h = (b - a) / s;
  re = 0;
  printf("Méthode des rectangles\n");
  while (i != s)
    {
      re = re + fx(n, (a + (h * i)));
      i++;
    }
  re = h * re;
  printf("\tI%.f = %.10f\n", n, re);
  printf("\tdiff = %.10f\n", diff(re));
}

void	trapeze(double n, double a, double b, double s)
{
  double	h;
  double	i;
  double	re;

  i = 1;
  h = (b - a) / s;
  re = 0;
  printf("Méthode des trapèzes\n");
  while (i != s)
    {
      re = re + fx(n, (a + (h * i)));
      i++;
    }
  re = 2 * re;
  re = re + fx(n, a) + fx(n, b);
  re = re * ((b - a) / (2*s));
  printf("\tI%.f = %.10f\n", n, re);
  printf("\tdiff = %.10f\n", diff(re));
}

void	simpson(double n, double a, double b, double s)
{
  double	h;
  double	i;
  double	re;
  double	re1;

  i = 1;
  h = (b - a) / s;
  re = 0;
  re1 = 0;
  printf("Méthode de Simpson\n");
  while (i != s)
    {
      re = re + fx(n, (a + (h * i)));
      i++;
    }
  i = 0;
  while (i < (b-1))
    {
      re1 = re1 + fx(n, (a + (h * i) + (h/2)));
      i++;
    }
  re = ((re * 2) + (re1 * 4) + fx(n, a) + fx(n, b)) * ((b-a) / (6 * s));
  printf("\tI%.f = %.10f\n", n, re);
  printf("\tdiff = %.10f\n", diff(re));
}

void	calc(double n, double c, double d, double s)
{
  printf("Calcul de I%.f entre %.f et %.f", n, c, d);
  printf(" avec %.f subdivisions\n", s);
  rectangle(n, c, d, s);
  trapeze(n, c, d, s);
  simpson(n, c, d, s);
}
