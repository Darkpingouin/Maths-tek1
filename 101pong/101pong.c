/*
** 101pong.c for 101pong in /home/orset_a/rendu/101pong
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Tue Nov  4 11:37:59 2014 aurelie orset
** Last update Tue Dec  1 20:16:05 2015 aurelie orset
*/

#include <stdio.h>
#include <math.h>

void	vecteurv(int x1, int y1, int z1, int x2, int y2, int z2, int n)
{
  int	x;
  int	y;
  int	z;
  int	xn;
  int	yn;
  int	zn;
  float	a;

  x = x2 - x1;
  y = y2 - y1;
  z = z2 - z1;

  a = 15.50;

  xn = x2 + (x * n);
  yn = y2 + (y * n);
  zn = z2 + (z * n);

  printf("%s%d%c%d%c%d%s","les coordonnées du vecteur vitesse sont (",x,';',y,';',z,").\n"); 
  printf("%s%d%s%d%c%d%c%d%s","A l'instant t+", n,", les coordonnées de la balle seront (",xn,';',yn,';',zn,").\n");
  printf("%s%f%s", "L'incidence est de ", a, " dégrès.\n");
}

int	main(int ac, char **av)
{
  int	x1;
  int	y1;
  int	z1;
  int	x2;
  int	y2;
  int	z2;
  int	n;

  if (ac < 8)
    printf("%s\n","Le nombre d'arguments entrés est incorrect, il en faut 7");

  else
    {
      x1 = my_getnbr(av[1]);
      y1 = my_getnbr(av[2]);
      z1 = my_getnbr(av[3]);
      x2 = my_getnbr(av[4]);
      y2 = my_getnbr(av[5]);
      z2 = my_getnbr(av[6]);
      n = my_getnbr(av[7]);
      vecteurv(x1, y1, z1, x2, y2, z2, n);
    }
}
