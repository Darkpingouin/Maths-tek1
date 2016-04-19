/*
** decryp.c for  in /home/thoma_p/Projet/102chiffrement
** 
** Made by Pierre-Olivier Thomas
** Login   <thoma_p@epitech.net>
** 
** Started on  Tue Nov 25 17:33:46 2014 Pierre-Olivier Thomas
** Last update Sun Nov 30 23:42:45 2014 aurelie orset
*/

#include <stdlib.h>

int     *make_line3(int *tab, char **argv)
{
  int   len;
  int   k;
  int   i;
  int   *line_1;

  len = my_strlen(argv[1]);
  i  = 0;
  k = 0;
  if (len % 2 != 0)
    {
      len = len + 1;
    }
  line_1 = malloc(sizeof(len/2));
  while (i != len/2)
    {
      line_1[i] = convertbase(tab[k], argv[6]);
      i = i + 1;
      k = k + 2;
    }
  return (line_1);
}
int     *make_line4(int *tab, char **argv)
{
  int   len;
  int   l;
  int   j;
  int   *line_2;

  len = my_strlen(argv[1]);
  l  = 1;
  j = 0;
  if (len % 2 != 0)
    {
      len = len + 1;
      line_2[len] = 0;
    }
  line_2 = malloc(sizeof(len/2));
  while (j != len/2)
    {
      line_2[j] = convertbase(tab[l], argv[6]);
      j = j + 1;
      l = l + 2;
    }
  return (line_2);
}

int     *make_invkey(char **argv)
{
  int   *key;

  key = malloc(sizeof(int) * 4);
  key[0] = atoi(argv[5]);
  key[1] = -atoi(argv[3]);
  key[2] = -atoi(argv[4]);
  key[3] = atoi(argv[2]);
  return (key);
}

int     *decrypt(char **argv)
{
  int   *tab;
  int   *line1;
  int   *line2;
  int   *key;
  int   *matrice;
  int   c;
  int   nb;
  int   len;
  int   i;

  c = 0;
  i = 0;
  len = my_strlen(argv[1]);
  matrice = malloc((sizeof(int) * len));
  tab  = malloc((sizeof(int) * len) + 1);
  while (argv[1][c] != '\0')
    {
      while(argv[1][c] != ' ')
	{
	  tab[nb] = argv[1][c];
	  c = c + 1;
	  nb = nb + 1;
	}
      c = c + 1;
    }
  line1 = make_line3(tab, argv);
  line2 = make_line4(tab, argv);
  key = make_invkey(argv);
  while (len > 0)
    {
      matrice[i] = (line1[i] * key[0]) + (line2[i] * key[2]);
      my_putnbr_base(matrice[i], argv[6]);
      my_putchar(' ');
      matrice[i + 1] =  (line1[i] * key[1]) + (line2[i] * key[3]);
      my_putnbr_base(matrice[i+1], " abcdefghijklmnopqrstuvwxyz");
      my_putchar(' ');
      i = i + 1;
      len = len - 2;
    }
  return (matrice);
}
