/*
** my_getnbr.c for my_getnbr in /home/orset_a/rendu/PiscineJ04
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Fri Oct  3 08:47:56 2014 aurelie orset
** Last update Sun Dec 14 11:35:49 2014 aurelie orset
*/

int	my_getnbr(char *str)
{
  int	nbr;
  int	s;
  int	i;

  nbr = 0;
  i = 0;
  s = 1;
  while (str[i] != '\0')
    {
      if (str[i] == '-')
	s = s * -1;
      else if (str[i] >= '0' &&  str[i] <= '9')
	{
	  nbr = nbr * 10 + str[i] - '0';
	  if (str[i + 1] < '0' && str[i + 1] > '9')
	    return (s * nbr);
	}
      else
	return (0);
      i = i + 1;
  }
  return (nbr * s);
}
