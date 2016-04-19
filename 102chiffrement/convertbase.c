/*
** convertbase.c for 102chiffrement in /home/orset_a/rendu/Projet/102chiffrement
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Sun Nov 30 20:34:04 2014 aurelie orset
** Last update Mon Dec  1 14:20:01 2014 aurelie orset
*/

#include <stdlib.h>
#include <math.h>

int	convertbase(char *nbr, char *base)
{
  int	r;
  int	len;
  int	len2;
  int	*base2;
  int	i;
  int	j;
  int	cpt;

  len =  my_strlen(base) - 1;
  i = len;
  len2 = my_strlen(nbr) - 1;
  base2 = malloc(sizeof(len));
  while (len > -1)
    {
      base2[i] = len;
      i = i - 1;
      len = len - 1;
    }
  cpt = 1;
  j = 0;
  r = 0;
  len = my_strlen(base);
  while(len2 > -1)
    {
      if (nbr[len2] == base[j])
	{
	  r = r + (base2[j] * cpt);
	  cpt = cpt * len;
	  len2 = len2 - 1;
	  j = 0;
	}
      else
	j = j + 1;
    }
  return (r);
}

