int     my_getnbr(char *str)
{
  int   nbr;
  int   s;
  int   i;

  nbr = 0;
  i = 0;
  s = 1;
  while (str[i] != '\0')
    {
      if (str[i] == '-')
        s = s * -1;
      if (str[i] >= '0' && str[i] <= '9')
        {
          nbr = nbr * 10 + str[i] - '0';
          if (str[i + 1] < '0' || str[i + 1] > '9')
            return (s * nbr);
        }
      if (nbr < 0)
        return (0);
      i = i + 1;
    }
  return (nbr * s);
}

