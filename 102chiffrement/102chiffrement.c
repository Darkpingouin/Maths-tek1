/*
** 102chiffrement.c for chiffrement in /home/orset_a/rendu/Projet/102chiffrement
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Nov 24 12:41:06 2014 aurelie orset
** Last update Sun Nov 30 23:34:43 2014 aurelie orset
*/
int	check_arg(char **av)
{
  int	i;

  i = 0;
  while (av[1][i])
    {
      if (!(av[1][i] >= 'a' && av[1][i] <= 'z' || av[1][i] == ' ') && atoi(av[7]) == 0)
	{
	  my_putstr("warning : only message chraracters accepted are between 'a' and 'z' and space ' ' ");
	  return (1);
	}
      i = i + 1;
    }
  if (atoi(av[7]) != 1 && atoi(av[7]) != 0)
    {
      my_putstr("flag should be either '0' or '1'");
      return (1);
    }
  return (0);
}

int	main(int ac, char **av)
{
  int	c;
  int	*matrice;

  if (ac != 8)
    my_putstr("error : 8 arguments expected");
  else
    c = check_arg(av);
  if (ac == 8 && c == 0)
    {
      if (atoi(av[7]) == 0)
	{
	  my_printf("chiffrement de '%s' à l'aide de la clé %d %d %d %d dans la base '%s'\n", av[1], atoi(av[2]), atoi(av[3]), atoi(av[4]),atoi(av[5]), av[6]);
	  my_putstr("=> ");
	  crypt(av);
	}
      else if (atoi(av[7]) == 1)
	{
	  my_printf("dechiffrement de '%s' à l'aide de la clé %d %d %d %d dans la base '%s'\n", av[1], atoi(av[2]), atoi(av[3]), atoi(av[4]),atoi(av[5]), av[6]);
	  my_putstr("=> ");
	  decrypt(av);
	}
    }
  my_putchar('\n');
}
